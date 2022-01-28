#include<bits/stdc++.h>
using namespace std;
void maximumsumof(int a[],int n)
{
    int best=0 , sum=0;
    for(int k=0;k<n;k++)
    {
        sum = max(a[k],sum+a[k]);
        best = max(best,sum);
       
    }
     cout << best;
    cout << "\n";
    
}
int main(){
    int n,i,j;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    int current=0;
    for(i=0;i<n;i++)
    {
        current=0;
        for(j=i;j<n;j++)
        {
            current += a[j];
            cout << current << " ";
        }
    }
    cout << "\n";
    maximumsumof(a,n);
}