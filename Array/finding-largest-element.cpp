#include<iostream>
using namespace std;
int largest(int arr[],int size)
{
    int l=0,pos;
    for(int i=0; i<size; i++)
    {
        if(l<arr[i])
        {
            l=arr[i];
            pos=i;
        }
    }
    return pos;
}
int main()
{
    int a[]={2,5,34,2,5456};
    cout << largest(a,5);
    return 0;
}