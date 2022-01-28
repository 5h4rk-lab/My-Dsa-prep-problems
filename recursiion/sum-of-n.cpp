#include<bits/stdc++.h>
using namespace std;
int sumr(int n)
{
    if(n==0)
    {
        return 0;
    }
    int prev=sumr(n-1);
    return n+prev;
}
int power(int n, int r)
{
    if(r==0)
    {
        return 1;
    }
    int pevpower=power(n,r-1);
    return n*pevpower;
}
int factorial(int n)
{
    if(n==0)
    {
        return 1;
    }
    int prefact = factorial(n-1);
    return n*prefact;
}
int fibonacci(int n)
{
    if(n==2||n==1)
    {
        return n-1;
    }
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n;
    cin >> n;
    cout << sumr(n) << "\n";
    cout << power(4,3);
    cout << "\n";
    cout << factorial(4) << "\n";
    cout << fibonacci(n);
}