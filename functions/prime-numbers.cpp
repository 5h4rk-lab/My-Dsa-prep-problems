#include<bits/stdc++.h>
using namespace std;
int primenumbers(int n1,int n2)
{
        int i,j;
       for(i=n1;i<=n2;i++){
        for(j=2;j<i;j++){
            if(i%j==0)
            {
                break;
            }
        }
        if(i==j){
            cout<<i<<"\n";
        }
       }
        return 0;
}
int main()
{
    int a,b;
    cin >> a >> b;
    primenumbers(a,b);
}