#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++){
		// tinh nghich dao cho i
		int x = i;
		int S=0;
		while(x!=0){
			S = S*10+x%10;
			x/=10;
		}
		printf("Nghich dao cua %d la %d\n",i,S);
	}
}
