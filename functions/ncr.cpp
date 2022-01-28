#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    int i,fac;
    fac = 1;
    for(i=1;i<=n;i++)
    {
        fac *= i;
        
    }
    
    return fac;
}

int main(){
    int n,r;
    cin >> n >> r;
    int ans = factorial(n)/(factorial(r)*factorial(n-r));
    cout << ans << "\n";

}
