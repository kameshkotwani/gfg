#include <stdio.h>
#include <stdlib.h>

struct Array
{
  int *A;
  int size;
  int length;
};

//To display all the elements in the Array
void displayElements(struct Array a)
{
  int i;
  for (int i = 0; i < a.length; i++)
  {
    printf("%d ", a.A[i]);
  }
}

//To insert the array at the end
void Append(struct Array *a, int x)
{
  //Checking if the length has reached the size of array or not
  if (a->length < a->size)
  {
    a->A[a->length++] = x;
  }
}

//Insert a value in Array at any given index
void insertValue(struct Array *a, int index, int x)
{
  if (index >= 0 && index <= a->length)
  {
    for (int i = a->length; i > index; i--)
    {
      a->A[i] = a->A[i - 1];
    }
    a->A[index] = x;
    a->length++;
  }
}

//To delete an element from array
int deleteElement(struct Array *a, int index)
{
  int x = 0, i;
  if (index >= 0 && index <= a->length)
  {
    x = a->A[index];
    for (int i = index; i < a->length - 1; i++)
    {
      a->A[i] = a->A[i + 1];
    }
    a->length--;
    return x;
  }
  return -1;
}

//To swap two values
void swap(int *x, int *y)
{
  int t = *x;
  *x = *y;
  *y = t;
}

//Linear Search using move to head
int linearSearch(struct Array *a, int key)
{
  for (int i = 0; i < a->length; i++)
  {
    if (a->A[i] == key)
    {
      swap(&a->A[i], &a->A[0]);
      return 0;
    }
  }
  return -1;
}

//To perform Binary Search
int binarySearch(struct Array a, int key)
{
  int low = 0;
  int high = a.length - 1;
  int mid;
  while (low <= high)
  {
    mid = (low + high) / 2;
    if (a.A[mid] == key)
    {
      return mid;
    }
    if (key < a.A[mid])
    {
      high = mid - 1;
    }
    else
    {
      low = mid + 1;
    }
  }
  return -1;
}

//Get the value stored at a given index
int get(struct Array a, int index)
{
  if (index >= 0 && index < a.length)
  {
    return a.A[index];
  }
  else
  {
    return -1;
  }
}

//Set a value at index in the array
void set(struct Array *a, int x, int index)
{
  if (index >= 0 && index < a->length)
    a->A[index] = x;
}

//Get the Max value
int Max(struct Array a)
{
  int max = a.A[0];
  for (int i = 0; i < a.length; i++)
  {
    if (a.A[i] > max)
    {
      max = a.A[i];
    }
  }
  return max;
}

//Get the Min value
int Min(struct Array a)
{
  int min = a.A[0];
  for (int i = 0; i < a.length; i++)
  {
    if (a.A[i] < min)
    {
      min = a.A[i];
    }
  }
  return min;
}

//Finding sum of all elements
int sum(struct Array a)
{
  int sum = 0;
  for (int i = 0; i < a.length; i++)
  {
    sum += a.A[i];
  }
  return sum;
}

//Average of elements
float average(struct Array a)
{
  int s = sum(a);
  return (float)s / a.length;
}

//Reversing the Array
void reverse(struct Array *a)
{
  int *B;
  int i, j;
  B = (int *)malloc(a->length * sizeof(int));
  for (i = a->length - 1, j = 0; i >= 0; i--, j++)
  {
    B[j] = a->A[i];
  }
  for (int i = 0; i < a->length; i++)
  {
    a->A[i] = B[i];
  }
}

//Reverse using single array
void reverse_two(struct Array *a)
{
  int i, j;
  for (i = 0, j = a->length; i < j; i++, j--)
  {
    swap(&a->A[i], &a->A[j]);
  }
}
//Left Shifting Array
void leftShift(struct Array *a)
{
  for (int i = 1; i < a->length; i++)
  {
    a->A[i - 1] = a->A[i];
  }
  a->length--;
}

//Shifting Array Right
void rightShift(struct Array *a)
{
  for (int i = a->length; i >= 0; i--)
  {
    a->A[i + 1] = a->A[i];
  }
  a->A[0] = 0;
  a->length++;
}

//Rotating an Array Left
void rotateLeft(struct Array *a)
{
  int t = a->A[0];

  for (int i = 1; i < a->length; i++)
  {
    a->A[i - 1] = a->A[i];
  }
  a->A[a->length - 1] = t;
}

//Rotating an Array Right
void rotateRight(struct Array *a)
{
  int t = a->A[a->length - 1];

  for (int i = a->length; i >= 0; i--)
  {
    a->A[i + 1] = a->A[i];
  }
  a->A[0] = t;
}

//To check if Array is sorted or not
int isSorted(struct Array a)
{
  for (int i = 0; i < a.length - 1; i++)
  {
    if (a.A[i] > a.A[i + 1])
      return 1;
  }
  return 0;
}

//To insert in sorted array
void insertSort(struct Array *a, int key)
{
  if (a->length == a->size)
    return;
  int i = a->length - 1;
  while (i >= 0 && a->A[i] > key)
  {
    a->A[i + 1] = a->A[i];
    i--;
  }
  a->A[i + 1] = key;
  a->length++;
}

//Re-arrange -ve to +ve
void rearrange(struct Array *a)
{
  int i = 0, j = a->length - 1;
  while (i < j)
  {
    while (a->A[i] < 0)
    {
      i++;
    }
    while (a->A[j] >= 0)
    {
      j--;
    }
    if (i < j)
    {
      swap(&a->A[i], &a->A[j]);
    }
  }
}

struct Array *mergeArrays(struct Array *x, struct Array *y)
{
  int i = 0, j = 0, k = 0;
  struct Array *z = (struct Array *)malloc(sizeof(struct Array));
  while (i < x->length && j < y->length)
  {
    if (x->A[i] < y->A[j])
    {
      z->A[k++] = x->A[i++];
    }
    else
    {
      z->A[k++] = y->A[j++];
    }
  }
  while (i < x->length)
  {
    z->A[k++] = x->A[i++];
  }
  while (j < x->length)
  {
    z->A[k++] = y->A[j++];
  }

  //Try this with adding the length its the same thing
  z->length = k;
  z->size = 10;
  return z;
}

//intersection in Arrays
struct Array *intersection(struct Array a, struct Array b)
{
  struct Array *c = (struct Array *)malloc(sizeof(struct Array));
  int i = 0, j = 0, k = 0;
  while (i < a.length)
  {
    for (j = 0; j < b.length; j++)
    {
      if (a.A[i] == b.A[j])
      {
        c->A[k++] = a.A[i];
      }
    }
    i++;
  }
  c->size = 10;
  c->length = k;
  return c;
}

//Union of arrays
struct Array *Union(struct Array a, struct Array b)
{
  int i = 0, j = 0, k = 0;
  struct Array *c = (struct Array *)malloc(sizeof(struct Array));

  while (i < a.length && j < b.length)
  {
    if (a.A[i] < b.A[j])
    {
      c->A[k++] = a.A[i++];
    }
    else if (b.A[j] < a.A[i])
    {
      c->A[k++] = b.A[j++];
    }
    else
    {
      c->A[k++] = a.A[i++];
      j++;
    }
  }
  while (i < a.length)
  {
    c->A[k++] = a.A[i++];
  }
  while (j < b.length)
  {
    c->A[k++] = b.A[j++];
  }
  c->length = k;
  c->size = 10;
  return c;
}

int main(void)
{
  struct Array user_a;
  printf("enter size of array : ", user_a.size);
  scanf("%d", &user_a.size);
  user_a.A = (int *)malloc(sizeof(int) * user_a.size);
  printf("how much elements?\n");
  scanf("%d", &user_a.length);
  for (int i = 0; i < user_a.length; i++)
  {
    scanf("%d", &user_a.A[i]);
  }
  displayElements(user_a);

  /*
  <----for dynamic array---->
  int n,i;
  scanf("%d",&arr.size);
  printf("size of the array-> %d\n",arr.size);
  arr.A=(int *)malloc(sizeof(int)*arr.size);
  arr.index=0;
  scanf("%d",&n);
  //enter all elements
  for(i=0;i<n;i++)
  {
    scanf("%d",&arr.A[i]);
  }  
  arr.index=n;
  */
}