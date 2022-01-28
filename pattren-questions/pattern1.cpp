#include<iostream>
using namespace std;
int main(){
    int row,column,i,j;
    cout << "enter rows: ";
    cin >> row;
    cout << "enter columns: ";
    cin >> column;

    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            cout << "* ";
        }
        cout << endl;
    }
}