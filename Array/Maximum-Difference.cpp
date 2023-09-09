#include<iostream>
using namespace std;
void maxDiff(int arr[],int n)
{
    int dif=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]-arr[i]>dif)
            {
                dif=arr[j]-arr[i];
            }
        }
    }
    cout << dif;            
}
int main()
{
    int arr[]={30,10,8,2},n=4;
    maxDiff(arr,n);
    return 0;
}