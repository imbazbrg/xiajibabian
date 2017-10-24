#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;
int ctyslen;
char cty[250];
int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	cin>>cty;
	ctyslen=strlen(cty);
	for (int i=ctyslen-1;i>=0;i--) {
		cout<<cty[i];
	}
	return 0;
	
}
	

