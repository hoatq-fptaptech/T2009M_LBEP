#include <stdio.h>
int main(){	
	int n;
	printf("n= ");
	scanf("%d",&n);
	int arr[n];// day la doan khai bao
	for(int i=0;i<n;i++){
		printf("Nhap gia tri:");
		scanf("%d",&arr[i]);
	}
	
	printf("Mang sau khi nhap vao:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
	int max = arr[0];
	for(int i=0;i<n;i++){
		if(max < arr[i]){
			max = arr[i];
		}
	}
	printf("\n Max = %d",max); 
	int max2;
	for(int i=0;i<n;i++){
		if(arr[i] < max){
			max2= arr[i];
			break;
		}
	}
	
	for(int i=0;i<n;i++){
		if(max2 < arr[i] && arr[i]<max){
			max2 = arr[i];
		}
	}
	printf("\n Max2 = %d",max2); 
}
