#include<iostream>
using namespace std;
bool pal(string s,int start, int end)
{
    if(start>=end) return true;
    return s[start]==s[end] && pal(s,start+1,end-1);
}
int main()
{
    string s = "asddsa";
    int n = s.length();
    cout << pal(s,0,n-1) << endl;
    
    return 0;
}