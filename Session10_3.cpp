#include <stdio.h>
#include <stdlib.h>
int main(){
	int *a;// day la mang nhugn chua co phan tu nao
	// cap phat phan tu lan dau tien
	a = (int *)malloc(5*sizeof(int));// chi dc chay 1 lan
	// int a[5]
	for(int i=0;i<5;i++){
		printf("a[%d]= ",i);
		scanf("%d",a+i);//scanf("%d",&a[i]);
	}
	// da co mang 5 so nguyen
	// thay doi kich thuoc mang
	a = (int *)realloc(a,10*sizeof(int));// chay nhieu lan
	// a da duoc tang thanh mang 10 phan tu
	// gia tri cu ko mat
	for(int i=5;i<10;i++){
		printf("a[%d]= ",i);
		scanf("%d",a+i);//scanf("%d",&a[i]);
	}
	printf("Sau khi nhap xong:\n");
	for(int i=0;i<10;i++){
		printf("%d ",*(a+i));// printf("%d= ",a[i])
	}
	free(a);// giai phong o nho
}
