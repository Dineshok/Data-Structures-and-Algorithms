#include<iostream>
#include<vector>
using namespace std;


int main()
{
    vector<int> v;
    for(int i=1; i<=5; i++)
    {
        v.push_back(i);
    }
    for (auto i = v.begin(); i != v.end(); ++i) 
        cout << *i << " ";    
    return 0;
}
