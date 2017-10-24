#include <iostream>
using namespace std;
int main ()
{
	int n,a,b,c;
	cin>>n;
	c=n/4;
	n=n-4*c;
	b=n/3;
	n=n-4*b;
	a=n/6;

	cout<<"A="<<a<<" ";
	cout<<"B="<<b<<" ";
	cout<<"C="<<c<<" ";
}
