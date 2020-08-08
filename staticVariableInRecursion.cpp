#include<bits/stdc++.h>
using namespace std;

int fun(int n)
{
    static int x=0;

    if(n>0)
    {
        x++;
        return fun(n-1)+n+x;
    }
    return 0;
}

int main()
{
    int a=3;
    cout<<fun(a)<<endl;
    return 0;
}

/*
                        f(3)
                        /
                    f(2)+3+3
                    /
                f(1)+2+3
                /
            f(0)+1+3
            /
            return 0;

            output : 6    */

