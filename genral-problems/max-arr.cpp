#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n;
    cin >> n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    int maxno=INT_MIN;
    int minno=INT_MAX;
    for(i=0;i<n;i++)
    {
        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }
    cout << maxno << " is max" << "\n";
    cout << minno << " is min" << "\n";
    return 0;
}