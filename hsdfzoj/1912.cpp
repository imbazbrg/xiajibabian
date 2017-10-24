#include <iostream>
#include <algorithm>
using namespace std;
int n,k;
int a[1000];
int main() {
	cin>>n>>k;
	for (int i=1; i<=n; i++) {
		cin>>a[i];
		cout<<a[i]<<((i==n)?"":" ");
	}
	cout<<endl;
	a[n+1]=k;
	sort(a,a+n+2);
	for (int i=1; i<=n+1; i++) {
		cout<<a[i]<<((i==n+1)?"":" ");
	}

}
