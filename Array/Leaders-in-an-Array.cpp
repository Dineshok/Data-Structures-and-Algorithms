#include<iostream>
using namespace std;
void leader(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        bool flag = true;
        for(int j=i+1; j<n; j++)
        {
            if(arr[i]<=arr[j]) flag = false;
        }
        if(flag) cout << arr[i] << " ";
    }
}
void leaderEfficient(int arr[],int n) // only difference is it prints the 
{                                     // leaders in Backwards
    int currentLeader= arr[n-1];
    cout << currentLeader << " ";
    for(int i=n-2; i>=0; i--)
    {
        if(arr[i]>currentLeader)
        {
            currentLeader=arr[i];
            cout << currentLeader << " ";
        }       
    }
}
int main()
{
    int arr[]={10,9,3,4,5,6,9,4,5,2,8,3,6,0},n=14;
    leaderEfficient(arr,n);
    return 0;
}