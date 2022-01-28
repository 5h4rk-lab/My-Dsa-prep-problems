#include<bits/stdc++.h>
using namespace std;
void reverse(string s)
{
    int n=s.size();
    if(n==0)
    {
        return;
    }
    string str=s.substr(1);
    reverse(str);
    cout << s[0];
}
int main(){
    // solution
    reverse("hello");
}