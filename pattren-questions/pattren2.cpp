//hollow rectangle 
#include<iostream>
using namespace std;
int main()
{
    int i,j,rows,coulmns;
    cin >> rows >> coulmns;
    for(i=0;i<rows;i++){
        for(j=0;j<coulmns;j++){
            if(i==0 || i==rows-1){
                cout<<"*";
            }
            else if(j==0||j==coulmns-1){
                cout<<"*";
            }
            else{
                cout << " ";
            }
        }
        cout << endl;
    }
}
