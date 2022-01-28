#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[5];
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }
    vector<int> so;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[i+1])
        {
            so.push_back(arr[i]);
        }
    }
    for(int i=0;i<so.size();i++)
    {
        cout << so[i] << " ";
    }

}