#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5]={1,2,3,4};
    int n,i;
    cin >> n;
    for(i=0;i<=n;i++)
    {
        if(arr[i]==n)
        {
            cout << "element found at " << i << " position" << "\n";
            return 0;
        }
    }
    cout << "Not found!!!";
}