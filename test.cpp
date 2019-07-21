#include<bits/stdc++.h>
using namespace std;
int main()
{
    int testcases; 
    cin>>testcases; //Input the testcases

    for(int i=0;i<testcases;i++) //While testcases are not exhausted
    {
        int a,b;
        cin>>a>>b; //Input first and second term of gp
        int n;
        cin>>n; //Input n

        double r=((double)b)/a; //Common ratio is given by r=b/a
        int nth_term=floor(a*pow(r,n-1)); //nth term is given by an=a(r^(n-1))
        cout<<nth_term<<endl; 
    }

    return 0;
}