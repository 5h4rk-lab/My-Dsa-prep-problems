#include<bits/stdc++.h>
using namespace std;
string dub(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch = s[0];
    string ans = dub(s.substr(1));
    if(ch==ans[0])
    {
        return ans;
    }
    return (ch+ans);
}
int main(){
    string s;
    cin >> s;
    cout << dub(s);
}