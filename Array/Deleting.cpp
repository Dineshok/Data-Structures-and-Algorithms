#include<iostream>
#include<vector>
using namespace std;
int b(int a[],int s,int x)
{
    int po=s+1;
    for(int i=0; i<s; i++)
    {
        if(a[i]==x)
        {
            po=i;
        }
    }
    for(int i=po; i<s; i++)
    {
        a[i]=a[i+1];
    }
    return s-1;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    int size =5;
    int j = 5;
    cout << b(arr,size,j);
    return 0;
}