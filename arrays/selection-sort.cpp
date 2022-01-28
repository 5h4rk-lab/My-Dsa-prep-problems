#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,n,j;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                int temp;
                temp = a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout << a[i] << " " ;
    }
    cout << "\n";
    return 0;
}