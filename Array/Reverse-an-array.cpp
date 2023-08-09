#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=7,low=0,high=n-1;
    while(low<high)
    {
        int temp = arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;
    }
    for(int i=0; i<n; i++)
    {
        cout << " " << arr[i];
    }
    
    return 0;
}