#include<iostream>
using namespace std;
int main()
{
    char button;
    cin >> button;

    switch (button)
    {
    case 'a':
        cout<< "hello";
        break;
    case 'b':
        cout<<"hola";
        break;
    case 'c':
        cout<<"Done now stop!";
        break;
    
    default:
        cout<<"no button of this!!!";
        break;
    }
}