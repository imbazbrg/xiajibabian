#include <iostream>
#include <algorithm>
using namespace std;
int a[105],n;
int main() {
	cin>>n;

	for(int i=1; i<=n; i++) {
		cin>>a[i];
		cout<<a[i]<<((i==n)?"":" ");
	}

	cout<<endl;
	n=unique(a,a+n)-a;
	for(int i=1; i<=n; i++) {
			cout<<a[i]<<((i==n)?"":" ");
		}
	



}
