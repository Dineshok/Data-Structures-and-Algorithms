#include <iostream>
using namespace std;
int sumDigit(int n)
{
    if(n==0) return 0;
    return n%10 + sumDigit(n/10);
}
int main()
{
    cout << sumDigit(156) << endl;
    return 0;
}