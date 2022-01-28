#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin >> n;
    int sum;
    int originaln=n;
    sum = 0;
    while(n>0)
    {
        i=n%10;
        int power;
        sum+= pow(i,3);
        n=n/10;
        
    }
    if(originaln==sum){
        cout << "its an amstrong number";
    }
    else{
        cout << "NOPE!!!";
    }

}