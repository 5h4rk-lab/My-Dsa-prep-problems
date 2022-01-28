#include<bits/stdc++.h>
using namespace std;
int kadane(int a[],int n)
{
    int maxsum=INT_MIN;
    int currentsum=0;
    for(int i=0;i<n;i++)
    {
        currentsum+=a[i];
        if(currentsum<0)
        {
            currentsum=0;
        }
        maxsum=max(maxsum,currentsum);
    }
    return maxsum;
}
int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int wrapsum , nonwrapsum;
    nonwrapsum = kadane(a,n);
    cout << nonwrapsum << " This is a non wrap sum" << "\n";
    int totalsum=0;
    for(int i=0;i<n;i++)
    {
        totalsum+=a[i];
        a[i]=-a[i];
    }
    wrapsum = totalsum+kadane(a,n);
    cout << max(wrapsum,nonwrapsum) << " is Max for non wrap \n";

}