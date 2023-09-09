#include<iostream>
using namespace std;
void rotateByOne(int arr[],int n,int d)
{
    for(int j=1; j<=d; j++)
    {
    int temp = arr[0];
    for(int i=0; i<n; i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    }
}
int main()
{
    int arr[]={1,2,3,4,5},n=5,d=3;
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl << "After Rotation" << endl;
    rotateByOne(arr,n,d);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}