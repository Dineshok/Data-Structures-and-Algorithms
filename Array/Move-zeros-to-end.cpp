#include<iostream>
using namespace std;
void moveZeroNaive(int arr[], int n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1; j<n; j++)
            {
                if(arr[j]!=0)
                {
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    }
}
void moveZeroEfficient(int arr[], int n)
{
    int count = 0;
    for(int i=0; i<n; i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[count],arr[i]);
            count+=1;
        }
    }
}
int main()
{
    int a[]= {2,4,2,5,0,0,6,0,5,6};
    int n=10;
    for(int i=0; i<n; i++)
    {
        cout << " " << a[i];
    }
    cout << endl << "Ater Moving the Zeros" << endl;
    moveZeroEfficient(a,n);
    for(int i=0; i<n; i++)
    {
        cout << " " << a[i];
    }
    return 0;
}