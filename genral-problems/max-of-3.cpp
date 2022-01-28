#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if(a>b){
        if(a>c){
            cout << a << " is greater among 3 inputs ";
        }
        else{
            cout << c << " is greater among 3 inputs ";
        }
    }
    else{
        if(b>c){
            cout << b << " is greater among 3 inputs ";
        }
        else{
            cout << c << " is greater among 3 inputs ";
        }

    }
}