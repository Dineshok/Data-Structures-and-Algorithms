#include<iostream>
using namespace std;
void fun(int n)
{
    if(n==0)
    return;
    fun(n-1);
    cout <<" "<< n;
}
//Now changing the fun() Function into - TAIL RECURSIVE FUNCTION fun1 
void fun1(int n, int k)
{
    if(n==0)
    return ;
    cout << k << " ";
    fun1(n-1,k+1);
}
int main()
{
    int k=1;
    fun1(5,k);
    return 0;
}