#include <iostream>
#include <algorithm>
using namespace std;
int a[10];
int main() {
	int n;
	cin>>n;
	for(int i=1; i<=n; i++) {
		a[i]=i;
	}
	do {
		for (int i=1; i<=n; i++)if(i==n)cout<<a[i];
			else {
				cout<<a[i]<<" ";
			}cout<<endl;
	} while (next_permutation (a+1,a+n+1));

	return 0;


}
