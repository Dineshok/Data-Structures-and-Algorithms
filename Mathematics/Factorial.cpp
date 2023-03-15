/*Now we are going to see about one of the basic algorithms which is 
finding Factorial of a Number
we are going to it with both 
1-Iterative way 
2-Recursive way*/

#include <iostream>
using namespace std;
int fact(int a){
    int f=1;
    if(a==0){
        return 0;
    }
    for(int i=1; i<=a; i++){
        f=f*i;
    }
    return f;
}
/*Now we are gonna use a fuction that works recursively*/
int factorial(int a)
{
    if(a==0){
        return 1;
    }
    return a*factorial((a-1));
}

int main()
{
    cout << "Enter a Number" << endl;
    int n;
    cin >> n ;
    cout << "The Factorial of " << n << " is "<< factorial(n)/*we can also call 'fact()' function*/ ;
    return 0;
}