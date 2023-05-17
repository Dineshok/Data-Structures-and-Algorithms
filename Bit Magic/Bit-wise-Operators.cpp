#include<iostream>
using namespace std;
int main()
{
    int x=3, y=1;
    unsigned int z=3;
    cout << "And & Operation : "<< (x&y)<< endl;
    cout << "OR | Operation : "<< (x|y)<< endl;
    cout << "XOR ^ Operation : "<< (x^y)<< endl;
    cout << "shift left << Operation : "<< (2<<1)<<" '0010'->'0100'"<< endl;
    cout << "shift right >> Operation : "<< (2>>1)<<" '0010'->'0001'"<< endl;
    cout << "NOT ~ Operation : "<<(~z)<<" it shifts 0-to-1 1-to-0"<<endl;
    
    return 0;
}