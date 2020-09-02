#include<bits/stdc++.h>
using namespace std;

int C(int n, int r)
{
    if(r==0 || r==n)
    {
        return 1;
    }
    else
    {
        return C(n-1,r-1)+C(n-1,r);
    }


}

int main()
{
    int n,r;

    try{
    cout<<"Enter N : ";
    cin>>n;
    cout<<endl<<"Enter r : ";
    cin>>r;
    cout<<endl;

    if(r<=n)
    {
        cout<<"nCr = "<<C(n,r);
    }
    else
    {
        throw(n,r);
    }


    }

    catch(int n)
    {
        cout<<"Invalid Insertion"<<n;
    }
    catch(int r)
    {
        cout<<"Invalid"<<r;
    }

    return 0;
}
