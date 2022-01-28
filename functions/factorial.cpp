// n * n-1 * n-2 ...
// n= 5
// 5 * 4 * 3 * 2 * 1
#include<bits/stdc++.h>
using namespace std;
#define REP(i,a,n) for(i=a;i<=n;i++) //Macro for forloop.
int factorial(int n)
{
    int i,fac;
    fac = 1;
    int a = 1;
    REP(i,a,n)
    {
        fac *= i;
        
    }
    
    return fac;
}
int main()
{
    int a,ans;
    cin >> a;
    ans = factorial(a);
    cout << ans;
    return 0;
}