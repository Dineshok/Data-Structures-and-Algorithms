#include<iostream>
using namespace std;
int secondlargest(int a[],int n)
{
    int largest=0,res=-1;
    for(int i=1; i<n; i++)
    {
        if(a[i]>a[largest])
        {
            res=largest;
            largest=i;
        }
        else if(a[i]!=a[largest])
        {
            if(res==-1||a[i]>a[res])
            {
                res=i;
            }
        }
    }
    return res;
}
int main()
{
    int arr[]={2,5,15,3,13};
    cout << secondlargest(arr,5);
    return 0;
}