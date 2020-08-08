#include<bits/stdc++.h>

using namespace std;

void fun1(int n)
{
    if(n>0)
    {
        fun1(n-1);
        cout<<n<<" ";

    }
}

int main(void)
{
    int x=3;
    fun1(3);
   // return 0;
}

