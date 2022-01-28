#include<bits/stdc++.h>
using namespace std;
string movelx(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch = s[0];
   string ans = movelx(s.substr(1));
   if(ch=='x')
   {
       return ans+ch;
   }
   return ch+ans;

}
int main(){
    string s;
    cin >> s;
    cout << movelx(s) << "\n";
}