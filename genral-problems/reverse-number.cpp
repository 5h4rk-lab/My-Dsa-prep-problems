#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin >> n;
    int j=0;
    while(n>0){
        i = n%10;
        j = j*10 + i;
        n=n/10;
    }

    cout << j << "\n";
}