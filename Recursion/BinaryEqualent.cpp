#include<iostream>
using namespace std;
int binary(int n)
{
    if(n==0)
    {
        return 0;
    }
    binary(n/2);
    cout << n;
}
int main()
{
    binary(4);
    return 0;
}