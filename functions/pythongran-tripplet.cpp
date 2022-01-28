#include<bits/stdc++.h>
using namespace std;
bool pythogran(int a,int b, int c)
{
    int a2 = max(a,max(b,c));
    int b2,c2;
    if(a==a2)
    {
        b2=b;
        c2=c;
    }
    else if(b==a2)
    {
        b2=c;
        c2=a;
    }
    else if(c==a2)
    {
        b2=a;
        c2=b;
    }
    if(pow(b2,2)+pow(c2,2)==pow(a2,2))
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    int a,b,c;
    cin >> a >> b >> c;
    if(pythogran(a,b,c))
    {
        cout << "Done!!!";
    }
    else
    {
        cout << "Wrong!!!";
    }
}