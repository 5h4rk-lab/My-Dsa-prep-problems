#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,S;
    cin >> n >> S;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int j=0,st=-1,en=-1,sum=0,i=0;
    while(j<n && sum+a[j]<=S){
        sum += a[j];
        j++;
    }
    if(sum==S)
    {
        cout << i+1 << " "<< j << "\n";
        return 0;
    }
    while (j<n)
    {
        sum += a[j];
        while(sum > S)
        {
            sum -= a[i];
            i++;
        }
        if(sum==S)
        {
            st=i+1;
            en=j+1;
            break;
        }
        j++;
    }
    cout << st << " " << en << "\n";
}