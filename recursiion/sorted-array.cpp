//check if array is sorted or not.
#include<bits/stdc++.h>
using namespace std;
bool arrsort(int arr[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool restarray = arrsort(arr+1,n-1);
    return(arr[0]<arr[1] && restarray );
}
int main(){
    int n=5;
    int arr[]={1,2,3,4,5};
    cout << arrsort(arr,n);
}