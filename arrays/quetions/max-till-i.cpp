#include<bits/stdc++.h>
using namespace std;
int main(){
    int mx = INT_MIN;
    int n,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        cout << mx << " ";
    }
    cout << "\n";
}