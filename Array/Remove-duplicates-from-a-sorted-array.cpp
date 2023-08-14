#include<iostream>
#include<cmath>
using namespace std;
int removeDuplicate(int arr[],int n)
{
    int nonDup=0;
    if(arr[0]==arr[n-1]) return 1;
    int size=1;
    for(int i=1; i<n; i++)
    {
        if(arr[i]!=arr[size-1])
        {
            arr[size]=arr[i];
            size++;
        }
    }
    return size;
    
}
int main()
{
    int arr[]={1,2,3,3,3,4,4,5,6,7,7,7,7,7,8,9,9};
    int size=removeDuplicate(arr,17);
    for(int i=0; i<size; i++)
    {
        cout << " " << arr[i];
    }

}