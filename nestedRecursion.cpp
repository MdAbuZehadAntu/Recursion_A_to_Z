#include<bits/stdc++.h>
using namespace std;

int fun(int n)
{
    if(n>100)
    {
        cout<<n-10<<" in 1"<<endl;
        return n-10;///96 97 98 99 100 101 91
    }
    else
    {
        cout<<n+11<<" in 2 "<<endl;
        return fun(fun(n+11));///106 107 108 109 110 111

    }
}

int main()
{
    int n;///n=95
    cin>>n;

    cout<<fun(n);
    return 0;
}
