/*All Divisors of a Number

Given a natural number n, print all distinct divisors of it.*/
#include<iostream>
using namespace std;
int divisors(int n)
{
    for(int i=1; i<=n; i++){
        if(n%i==0) cout<<i<<" ";
    }
    return 0;
}
void efficiant_divisors(int n)
{
    int i;
    for(i=1;i*i<=n;i++)
    {
        if(n%i==0) cout<<i<<" ";
    } 
    for(;i>=1;i--){
        if(n%i==0) cout<<n/i<<" ";
    }                         
}                       
int main()
{
    int a;
    cin>>a;
    efficiant_divisors(a);
    return 0;
}