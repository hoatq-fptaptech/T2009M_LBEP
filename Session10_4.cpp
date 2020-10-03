#include <stdio.h>
#include <stdlib.h>
int main(){
	int n,*arr;
	printf("Nhap n= ");
	scanf("%d",&n);
	arr = (int *)malloc(n*sizeof(int));
	for(int i=0;i<n;i++){
		printf("arr[%d] = ",i);
		scanf("%d",arr+i);
	}
	for(int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j] > arr[j+1]){
				int tmp= arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	int m;
	printf("Nhap so luong can them: ");
	scanf("%d",&m);
	arr = (int *)realloc(arr,(m+n)*sizeof(int));
	for(int i=n;i<n+m;i++){
		printf("arr[%d] = ",i);
		scanf("%d",arr+i);
	}
	for(int i=0;i<n+m-1;i++){
		for(int j=0;j<n+m-i-1;j++){
			if(arr[j] > arr[j+1]){
				int tmp= arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	printf("Sau khi sap xep:\n");
	for(int i=0;i<n+m;i++){
		printf("%5d",*(arr+i));
	}
}
