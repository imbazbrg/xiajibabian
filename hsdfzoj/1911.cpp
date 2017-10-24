#include <iostream>
using namespace std;
int a[105],n;
int main() {
	cin>>n;
	for(int i=1; i<=n; i++) {
		cin>>a[i];
	}for(int i=1; i<=n; i++) {
		cout<<a[i]<<((i==n)?"":" ");
	}	
		cout<<endl;
	for(int i=2; i<=n; i++) {
		cout<<a[i]<<' ';
	}	cout<<a[1];
	return 0;

}
