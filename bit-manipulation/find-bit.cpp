#include<bits/stdc++.h>
using namespace std;
int findbit(int num,int pos){
    return((num&(1<<pos))!=0);
}
int main(){
    int num,pos;
    cin >> num;
    cin >> pos;
    cout << findbit(num,pos);
}