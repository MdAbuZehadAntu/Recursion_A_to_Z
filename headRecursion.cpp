///function call is the first statement here.
///all the processing is done in returning.


#include<bits/stdc++.h>

using namespace std;

void fun(int n)
{
    if(n>0)
    {
        fun(n-1);
        cout<<n<<" ";
    }
}


int main()
{
    fun(3);
    return 0;
}
