#include<bits/stdc++.h>
using namespace std;

int pow(int m,int n)
{
    if(n==0)
        return 1;
    if(n%2==0)
    {
        return pow(m*m,n/2);
    }
    else
        return pow(m*m,n/2)*m;

}

int main()
{
    int m,n;


        cin>>m>>n;
        cout<<pow(m,n)<<endl;




    return 0;
}

