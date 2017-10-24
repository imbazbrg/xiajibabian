#include <iostream>
using namespace std;
long long a[1000],b[1000],n;
int index=0;
int main() {
	cin>>n;
	for(int i=0; i<n; i++) {
		cin>>a[i];
		cout<<a[i]<<((i==n-1)?"":" ");

	}
	cout<<endl;
	for(int i=1; i<n; i++) {
		if(a[index]>a[i]) {
			index=i;
		}
	}
	int tmp = a[0];
	a[0]=a[index];
	a[index]=tmp;
	for(int i=0; i<n; i++) {
		cout<<a[i]<<((i==n-1)?"":" ");
	}
	return 0;
}
