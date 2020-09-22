#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		// tinh giai thua cho i
		int S=1;
		for(int j=1;j<=i;j++){
			S*=j;
		}
		printf("%d! = %d\n",i,S);
	}
}
