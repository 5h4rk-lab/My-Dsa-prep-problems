#include<bits/stdc++.h>
using namespace std;
int set_bit(int n,int pos){
    return (n | (1<<pos) );
}
int main(){
    cout << set_bit(5,1);
}