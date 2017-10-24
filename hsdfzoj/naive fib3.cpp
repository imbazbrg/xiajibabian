#include<iostream>
using namespace std;
long long fac(int n) {
	if(n==1)		return 1;
	else if(n==2)	return 2;
	else return fac(n-1)+fac(n-2);
}
int main() {
	int i;
	cin>>i;
	cout<<fac(i-1);
}
