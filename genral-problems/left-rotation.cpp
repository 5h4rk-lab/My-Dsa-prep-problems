#include <bits/stdc++.h>
using namespace std;
void leftrotation(int arr[], int k, int n)
{
    int startp = k % n;
    for (int i = 0; i < n; i++)
    {
        cout << (arr[(startp + i) % n]) << " ";
    }
    cout << "\n";
}
int main()
{
    // solution
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    int k = 1;
    leftrotation(arr, k, n);
}