#include<bits/stdc++.h>
using namespace std;
int theif(int value[],int wt[],int n, int W)
{
    if(n==0||W==0)
    {
        return 0;
    }
    if(wt[n-1]>W){
        return theif(value,wt,n-1,W);
    }
   return max(theif(value,wt,n-1,W-wt[n-1]) + value[n-1],theif(value,wt,n-1,W));
}
int main(){
    // solution
    int wt[]={10,20,30};
    int value[]={100,50,150};
    int W = 50;
    cout << theif(value,wt,3,W) << "\n";
  
}