#include<bits/stdc++.h>
using namespace std;
void convert_upper(string s1){
    for(int i=0;i<s1.size();i++)
    {
        if(s1[i]>='a' && s1[i]<='z')
        {
            s1[i]-=32;
        }

    }
    cout << s1;
}
int main(){
    string s1="asdfghjkl";
    convert_upper(s1);
}