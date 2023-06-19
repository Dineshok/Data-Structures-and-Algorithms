#include<iostream>
using namespace std;
//recursive solution to print numbers from 1 to N using recursion.
int print(int n)
{
    if(n==0){
        return 0;
    }
    print(n-1);    
    cout << n ;
}
int main()
{
    print(5);
    return 0;
}
