#include<iostream>
using namespace std;
//This is Simple function to find GCD
/*int gcdOfTwoNumbers(int n,int m){
    int res=min(n,m);
    while(res>0){
        if(n%res==0 && m%res==0){
            break;
        }
        res--;
    }
    return res;
}*/
//This can be done by - EUCLIDEAN Algorithm
/*int gcdOfTwoNumbers(int a, int b){
    while(a!=b){
        if(a>b){
            a=a-b;
        }
        else{
            b=b-a;
        }
    }
    return a;
}*/
//Simplified EUCLIDEAN Algorithm
int gcdOfTwoNumbers(int a, int b){
    if(b==0){
        return a;
    }
    return gcdOfTwoNumbers(b,a%b);
}
int main(){
    int a,b;
    cin >> a>>b;
    cout << gcdOfTwoNumbers(a,b)<< endl;
    
    return 0;
}
