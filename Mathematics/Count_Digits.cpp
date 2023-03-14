#include <iostream>
using namespace std;
/*Lets see an algorithm which can find the number of Digits of the number we give
here we are having a function called "digits" which returns the number of digits*/
int digits(int a)
    {
        int res=0;
        while(a>0){
            a=a/10;
            res++;
        }
        return res;
    }
int main()
{
    
    
    int num;
    cin >> num ;
    /*We are using 'num' as our Input */
    int numdigit = digits(num);
    cout << numdigit;
    
    return 0;
}
