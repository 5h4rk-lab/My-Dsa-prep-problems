#include<bits/stdc++.h>
using namespace std;
void tower(int n,char src,char dest,char help)
{
    if(n==0)
    {
        return;
    }
    tower(n-1,src,help,dest);
    cout << "Move from " << src << " to "<<dest << "\n";
    tower(n-1,help,dest,src);

}
int main(){
    // solution
    int n=3;
    char src = 'A';
    char help = 'B';
    char dest = 'C';
    tower(3,'A','B','C');

}