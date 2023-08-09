#include<iostream>
using namespace std;
bool sort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        if(arr[i]<arr[i-1]) return false;          
    }
    return true;
}
int main()
{
    int arr[]={1,2,3,4,5,6};
    cout << sort(arr,6);

}