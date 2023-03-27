#include<iostream>
using namespace std;
int gcdOfTwoNumbers(int n,int m){
    int res=min(n,m);
    while(res>0){
        if(n%res==0 && m%res==0){
            break;
        }
        res--;
    }
    return res;
}
int main(){
    int a,b;
    cin >> a>>b;
    cout << gcdOfTwoNumbers(a,b)<< endl;
    
    return 0;
}