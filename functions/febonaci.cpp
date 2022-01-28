#include<bits/stdc++.h>
using namespace std;
int febonaci(int a)
{
    int i, sum=0 , sum1=1 ,nextterm;
    for(i=1;i<=a;i++)
    {
        cout << sum << ",";
        nextterm = sum+sum1;
        sum=sum1;
        sum1=nextterm;
    }
    return 0;
}

int main()
{
    int n;
    cin >> n;
    febonaci(n);
}