#include<bits/stdc++.h>
using namespace std;

void funB(int n);


void funA(int n)
{
    if(n>0)
    {
        cout<<n<<" in A "<<endl;///10 4 1
        funB(n-1);
    }
}
void funB(int n)
{

    if(n>0)
    {
        cout<<n<<" in B "<<endl;///9 3
        funA(n/2);
    }
}



int main()
{
    int n;


    cout<<3/2;

    funA(n);

    return 0;
}
