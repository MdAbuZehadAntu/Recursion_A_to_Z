#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int factorial(int n)
{
    if(n==0)
        return 1;
    else if (n==1)
        return 1;
    else
        return (n*factorial(n-1));
}

double fun(int x,int n)
{
    double res=0;
    double pes=1;
    //double pow;

    if(n==0)
    {
        return x;
    }
    else{
            return fun(x,n-1)+(pow(x,(2*n+1))*pow((-1),n))/factorial(2*n+1);
        }

}

int main()
{

    cout<<fun(2,4);
    return 0;
}
