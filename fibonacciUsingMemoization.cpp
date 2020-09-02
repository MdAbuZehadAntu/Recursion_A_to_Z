#include<bits/stdc++.h>
using namespace std;

int f[100];

int fib(int n)
{


    if(n<=1)
    {
        f[n]=n;
        return n;
    }
    else
    {
        if(f[n-2]==-1)
        {
            f[n-2]=fib(n-2);
        }
        if(f[n-1]==-1)
        {
            f[n-1]=fib(n-1);
        }
        return f[n-2]+f[n-1];
    }
}
int main()
{

    int n;
    cout<<"Term : ";
    cin>>n;
    for(int i=0;i<n;i++)
    {
        f[i]=-1;
    }


    cout<<fib(n);
    return 0;
}
