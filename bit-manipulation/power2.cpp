#include<bits/stdc++.h>
using namespace std;
bool power2(int n)
{
    return (n && !(n&n-1));
}
int noofbit(int n)
{
    int a=0;
    while(n>0)
    {
        n = n&n-1;
        a++;
    }
    return a;
}
int main(){
    int n;
    cin >> n;
    cout << noofbit(19);
    return 0;
}