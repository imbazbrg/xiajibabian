#include <iostream>
using namespace std;
int arr[1000];
int fibonacci(int x) {
	if(x==1)return 1;
	if(x==2)return 1;
	if(arr[x]!=0)return arr[x];
	else {
		arr[x]=fibonacci(x-1)+fibonacci(x-2);
		return arr[x];
	}
}
int main()
{
	int n;
	cin>>n;
	cout<<fibonacci(n);
}
