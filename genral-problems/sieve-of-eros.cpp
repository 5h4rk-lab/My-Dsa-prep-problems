//Sieve of Eratosthenes
#include<bits/stdc++.h>
using namespace std;
void primesieve(int n)
{
    int arr[100]={0};
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                arr[j]=1;
            }
        }
    }
    for(int i=2;i<=n;i++)
    {
        if(arr[i]==0){
            cout << i << " ";
        }
    }cout << "\n";
}
void pfactorsieve(int n)
{
    int arr[100]={0};
    for(int i=2;i<=n;i++)
    {
        arr[i]=i;
    }


    for(int i=2;i<=n;i++)
    {
        if(arr[i]==i)
        {
            for(int j=i*i;j<=n;j+=i)
            {
                if(arr[j]==j)
                {
                    arr[j]=i;
                }
            }
        }
    }
    while(n!=1)
    {
        cout << arr[n] << " ";
        n = n/arr[n];
    }
}

int main(){
    int n;
    // input to print prime numbers in range 1-n
    cin >> n;
    cout << "prime numbers are: "<<"\n";
    primesieve(n);
    cout << "\n" << "\n";
    cout << "prime factors are: " << "\n";
    pfactorsieve(n);
}