#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin >> n;
    m=n;
    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin >> a[i][j];
        }
    }

    for(int i=0;i<3;i++)
    {
        for(int j=i;j<3;j++)
        {
            int temp = a[i][j];
            a[i][j] = a[j][i];
            a[j][i] = temp;
        }
    }
    //print 
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}