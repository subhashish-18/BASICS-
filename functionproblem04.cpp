#include<iostream>
using namespace std;

int fact(int n)
{
    int factorial = 1;
    for(int i = 2 ; i<=n ; i++)
    {
        factorial = factorial*i;
    }
    return factorial;
}

int main()
{
    int n,r;
  //  int ncr = 0;
    cin>>n>>r;
    cout << fact(n)/(fact(r)*fact(n-r));
    return 0;
}