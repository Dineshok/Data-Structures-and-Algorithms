#include<iostream>
using namespace std;
void reverse(int arr[],int a, int b)
{
    while(a<b)
    {
        swap(arr[a],arr[b]);
        a++;
        b--;
    }
}
void rotateByD(int arr[],int n, int d)
{
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9},n=9,d=3;
    for(int i=0; i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout << endl << "After Rotation" << endl;
    rotateByD(arr,n,d);
    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}