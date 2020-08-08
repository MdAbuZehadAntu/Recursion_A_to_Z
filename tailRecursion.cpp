
///if a recursive function is calling it self and that call is the
///last statement in the function then it's tail recursion.
/// at returning time it doesn't have to perform anything at all
///if fun(n-1)+3, then it's not tail recursion
#include<stdc++.h>
using namespace std;

void fun(int n)
{

    if(n>0)
    {

        cout<<n<<" ";
        fun(n-1);
        ///last statement of the function
    }
}

int main()
{
    fun(3);

    return 0;
}

