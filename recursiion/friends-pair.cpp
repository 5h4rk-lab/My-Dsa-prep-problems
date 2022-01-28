#include<bits/stdc++.h>
using namespace std;
int fpair(int n)
{
    if(n==0 || n==1 || n==2 )
    {
        return n;
    }
    return fpair(n-1) + fpair(n-2)*(n-1);
    
}
int main(){
    // solution
    cout << fpair(4) << "\n";
}