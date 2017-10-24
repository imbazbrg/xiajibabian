#include<iostream>
using namespace std;
int main() {
	int a,b,c,k,f;
	cin>>f>>a>>b>>c;
	if(a>b) {
		k=a;
		a=b;
		b=k;
	}
	if(a>c) {
		k=a;
		a=c;
		c=k;
	}
	if(b>c) {
		k=b;
		b=c;
		c=k;
	}
	if(f==1){cout<<a;}
	else{cout<<b;}
	return 0;
}
