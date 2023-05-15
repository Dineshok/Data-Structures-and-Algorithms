#include<iostream>
#include<vector>
using namespace std;
bool isPrime(int a)
{
    if(a==1) return false;
    if(a==2||a==3) return true;
    if(a%2==0||a%3==0) return false;
    for(int i=5; i*i<=a; i=i+6)
    {
        if(a%i==0||a%(i+2)==0) return false;
    }
    return true;
}
void printPrimers(int n)
{
    for(int i=2; i<=n; i++)
    {
        if(isPrime(i)) cout<<i<<" ";
    }
}
void sieve(int n)
{
    //We create a Booleanvector of length n+1 and initialize every value as TRUE
    vector<bool>itsPrime(n+1,true);
    for(int i=2; i*i<=n; i++)
    {
        if(itsPrime[i])
        {
            //Then we iterate through the values till sqrt of n and 
            //change all the multiples of every iteration as FALSE
            for(int j=2*i; j<=n; j=j+i)
            {
                itsPrime[j]=false;
            }               
        }
    }
    //Hense after finishing this we will have the vector having Prime numbers as TRUE
    for(int i=2; i<=n; i++)
    {
        if(itsPrime[i]) cout << i << " ";
    }
}
int main()
{
    int n;
    cin>>n;
    (n);
    return 0;
}