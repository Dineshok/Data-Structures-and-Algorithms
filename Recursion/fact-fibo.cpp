#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0){
        return 1;
    }
    return n*fact(n-1);
}
int fibbo(int n)
{
    if(n==0) return 0;
    if(n==1) return 1;

    return fibbo(n-1)+fibbo(n-2);
}
int main()
{   
    cout << fact(5)<< endl;
    cout<< fibbo(6)<< endl;
}