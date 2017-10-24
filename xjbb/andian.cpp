#include <iostream>
using namespace std;
int a[3010][3010];

int h,l;

int xb_h[3010];
int flag_h[3010];

int xb_l[3010];
int flag_l[3010];

int main() {
	cin>>h>>l;

	for (int i=1; i<=h; i++) {
		for (int j=1; j<=l; j++) {
			cin>>a[i][j];
		}
	}	//Êý×é¶ÁÈë //

	for(int i=1; i<=h; i++) {
		xb_h[i]=1;
		for(int j=1; j<=l; j++) {
			if( a[i] [ xb_h[i] ]<a[i] [j]) {
				xb_h[i]=j;
			}
		}
	}

	for (int j=1; j<=l; j++) {
		xb_l[j]=1;
		for (int i=1; i<=h; i++) {
			if( a[xb_l[j]] [j]>a[i] [j]) {
				xb_l[j]=i;
			}

		}
	}
	bool flag=false;
	for (int i=1; i<=h; i++) {
		for (int j=1; j<=l; j++) {
			if(xb_h[i]==j&&xb_l[j]==i) {
				cout<<i<<' '<<j<<' '<<a[i][j]<<endl;
				flag=true;
			}
		}
	}
	if(flag==false){cout<<"not found";}

}









