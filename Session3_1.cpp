#include <stdio.h>
int main(){
	char ch;
//	printf("Nhap ky tu:");
//	scanf("%c",&ch);
	//ch = getchar();
//	
//	printf("ky tu vua nhap vao la: %c",ch);
	//putchar(ch);
	int n=3;
	
	if(n>2)
		printf("A");
	else if(n>4)
		printf("B");
	else if(n<4)
		printf("C");
	else
		printf("D");			
	
	switch(n){
		case 1: printf("so 1");break;
		case 2: printf("so 2");break;
		case 3: printf("so 3");break;
		default: printf("ko co so nao ca");
	}
	
	int m=6,d=29;
	
	switch(m){
		case 1: printf("ngay thu %d trong nam",d);break;
		case 2: printf("ngay thu %d trong nam",d+31);break;
		case 3: printf("ngay thu %d trong nam",d+31+28);break;
		case 4: printf("ngay thu %d trong nam",d+31+28+31);break;
		default:printf("phai chon thang tu 1-12");
	}
	
	char ch = 'y';
	switch(ch){
		case 'y': printf("Tiep tuc cai dat");
		case 'n': printf("dung cai dat");
	}

}
