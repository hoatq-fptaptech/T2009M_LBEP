#include <stdio.h>
int main(){
	int n,S=0;
	printf("Nhap n=");
	scanf("%d",&n);
//	while(n!=0){
//		S = S*10 + n%10;
//		n/=10;
//	}

//	for( ;n!=0 ;n/=10){
//		S = S*10 + n%10;
//	}
	
	do{
		S = S*10 + n%10;
		n/=10;
	}while(n!=0);
	
//	for( ; ; ){
//		printf("nice \t");
//	}
	
	printf("Nghich dao: %d",S);
}
