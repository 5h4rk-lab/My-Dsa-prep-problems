#include<bits/stdc++.h>
using namespace std;
int sum(int n)
{
    int sum=0,i;
    for(i=0;i<=n;i++){
    sum+=i;
    }
    return sum;

}
int main()
{
    int i,n;
    cin >> n;
    int ans = sum(n);
    cout << ans;

}