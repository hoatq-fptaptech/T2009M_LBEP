#include <stdio.h>
int main(){
	int n;
	do{
		printf("n=");
		scanf("%d",&n);
	}while(n<0);
	if(n==0){
		printf("So can tim la 0");
	}else if(n<2){
		printf("So can tim la 1");
	}else{
		int x1=0,x2=1,x3=1;
		for(int i=3;x2+x3<=n;i++){
			x1=x2;
			x2=x3;
			x3=x1+x2;
		}
		printf("So can tim la la %d",x3);
	}
}
