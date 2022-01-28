#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,i;
    cin >> n;
    int a[n+1];
    a[n]=-1;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    if(n==1){
        cout << "1" << "\n";
        return 0;
    }
    int ans=0,mx=-1;
    for(i=0;i<n;i++)
    {
        if(a[i]>mx && a[i]>a[i+1])
        {
            ans++;
        }
        mx=max(mx,a[i]);
    }
    cout << ans << "\n";
    return 0;
}