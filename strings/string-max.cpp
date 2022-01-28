#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1 = "1234";
    sort(s1.begin(),s1.end(),greater<int>());
    cout << s1;
}