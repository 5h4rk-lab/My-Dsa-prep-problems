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
int ncr(int i, int j){
    int ans = factorial(i)/(factorial(j)*factorial(i-j));
    return ans;
}
int main()
{
    int a;
    cin >> a;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout << ncr(i,j) << " ";
        }
        cout << "\n";
    }

}