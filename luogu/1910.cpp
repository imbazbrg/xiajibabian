#include <iostream>
using namespace std;
int a[25],b[25];
int main() {
	int n;
	cin>>n;
	for (int i=1;i<=n;i++){cin>>a[i];;}
	
	for (int i=1;i<=n;i++){cout<<a[i]<<' ';}
//	for (int i=1;i<=n;i++){cout<<b[i];}
	return 0;
}
