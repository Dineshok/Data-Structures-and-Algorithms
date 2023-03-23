#include<iostream>
using namespace std;
/*Given an integer n, write a function that returns count of trailing zeroes in n!. */
int trailingZerosInFactorial(int a){
    int fact=1,b,zeros=0;
    for(int i=1; i<=a; i++){
        fact = fact*i;
    }
    int res =0;
    while(fact%10==0){
        res=res+1;
        fact=fact/10;
    }
    return res;
}

int main()
{
    int n;
    cin >> n;
    int answer = trailingZerosInFactorial(n);
    cout << answer;

    
    
    return 0;
}
