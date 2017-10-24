#include <iostream>
#include <algorithm>
using namespace std;
int a[4];
int main(){
	for (int i=1;i<=3;i++){
		cin>>a[i];		
	}
	int ans=0;
	for (int i=1;i<=3;i++){
		ans=max(ans,a[i]);
		
	}
	cout<<ans;
	
	return 0;
	
}

