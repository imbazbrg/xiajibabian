#include <cstdio>
using namespace std;
int main() {
	int flag,i,j,k,row,col,n;
	int a[6][6];
	printf("输入一个正整数n：");
	scanf("%d",&n);
	printf("
	       输入方阵中的元素：
	       \n");
	for(i=0; i<n; i++)
		for(j=0; j<n; j++)
			scanf("%d",&a[i][j]);
	row=col=0;
	for(row=0; row<n; row++) {
		for(col=0; col<n; col++) {
			flag=1;
			for(j=0; j<n; j++)
				if(a[row][j]>a[row][col]) {
					flag=0;
					break;
					for(i=0; i<n; i++)
						if(a[i][col]<a[row][col]) {
							flag=0;
							break;

						}
					if(flag==1)break;
				}
			if(flag==1)
				break;
		}
		if(flag!=0)

			printf("a[%d][%d]=%d\n",row,col,a[row][col]);
		else
			printf("NO\n");
	}
