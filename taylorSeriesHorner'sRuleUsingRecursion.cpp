#include<bits/stdc++.h>

using namespace std;

double fun(int x,int n)
{
    static double res=1;
    if(n==0)
        return res;
    res=1+(x*res)/n;
    return fun(x,n-1);

}

int main()
{
    int x,n;
    cin>>x>>n;
   // x=double(x)
    cout<<fun(x,n);

    return 0;
}
