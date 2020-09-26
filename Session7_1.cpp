#include <stdio.h>
int main(){
	int ary[3][4];
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("Nhap gia tri: ");
			scanf("%d",&ary[i][j]);
		}
	}
	printf("mang vua nhap:\n");
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%5d",ary[i][j]);
		}
		printf("\n");
	}
}
