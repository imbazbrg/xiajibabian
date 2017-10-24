#include<iostream>
using namespace std;

int main()
{	long long a,b,c;
	cin>>a>>b>>c;
	if(a>b)b=a;
	if(a>c)cout<<a;
	if(a<c)cout<<c;
    return 0;
}
