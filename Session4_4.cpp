#include <stdio.h>
int main(){
	int n,S=1;
	do{
		printf("nhap 1 so tu nhien n=");
		scanf("%d",&n);
	}while(n<0);
	
	for(int i=1;i<=n;i++){
		S*=i;
	}
	//for(int i=1;i<=n;S*=i,i++); 
	printf("%d! = %d",n,S);
	
//	char ch;
//	do{
//		printf("Nhap Y|y de tiep tuc hoac N|n de huy bo");
//		scanf("%c",&ch);
//	}while(ch!='Y'&&ch!='y'&&ch!='N'&&ch!='n');
	
	S=0;
	for(int i=0;i<=1000;S+=i,i++);
	printf("\nS = %d",S);
	
}
