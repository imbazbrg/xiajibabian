#include <iostream>
using namespace std;
int flag[1000000];
long long ri[5000];
long long ji[1000000][4];
int k1[9000],k2[9000];

int main() {
	long long n,m;
	cin>>n>>m;
	for(int i=1; i<=n; i++) {
		cin>>ri[i];
	}
	for(int i=1; i<=m; i++) {
		for(int j=1; j<=3; j++) {
			cin>>ji[i][j];
		}
	}//shuru//


	for(int i=1; i<=m; i++) {
		for(int j=ji[i][2]; j<=ji[i][3]; j++) {
			ri[j]=ri[j]-ji[i][1];
			if(ri[j]<0) {
				cout<<"-1"<<endl<<i;
				break;
				break;
				break;
			}
		}
	}

}
