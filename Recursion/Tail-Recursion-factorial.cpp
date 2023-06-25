#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==1||n==0)
    return 1;
    return n*fact(n-1);
}// this is a normal recursive function for Factorial
//lets make this function Tail Recursive
int fact1(int n,int k)
{
    if(n==1||n==0)
    return k;
    return fact1(n-1,k*n);
}
int main()
{
    int k=1;
    cout<< fact1(5,k);

    return 0;
}