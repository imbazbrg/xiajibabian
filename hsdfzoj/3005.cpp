#include<iostream>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    string s=to_string(n);
    for(int i=0;i<s.size();i++)
    {
        if(i!=s.size()-1)
            cout<<s[i]<<" ";
        else
            cout<<s[i];
    }
    return 0;
}
