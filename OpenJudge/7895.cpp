#include <iostream>
#include <string>
#include <cstdio>
using namespace std;
int main () {
	freopen("data.in","r",stdin);
	freopen("data.out","w",stdout);
	char a;
	cin>>a;
	cout<<"  "<<a<<endl;
	cout<<" "<<a<<a<<a<<endl;
	for(int i=1;i<=5;i++){cout<<a;}cout<<endl;
	cout<<" "<<a<<a<<a<<endl;
	cout<<"  "<<a<<endl;
	return 0;	
}
