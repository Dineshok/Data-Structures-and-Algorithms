#include<iostream>
using namespace std;
//Naive Solution 
/*
int lcm(int a, int b){
    for(int i=max(a,b); i<=a*b; i++){
        if(i%b==0&&i%a==0){
            return i;
        }
    }
    return 0;
}*/

//Efficient Solution 
//We are using formula - a*b=gcd(a,b)/lcm(a,b)
int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}
int lcm(int a, int b)
{
    return a*b/gcd(a,b);
}
int main()
{
    int n, m;
    cin >> n >> m;
    cout << "LCM of "<<n<<" and "<<m<<" is " << lcm(n,m);
    return 0;
}