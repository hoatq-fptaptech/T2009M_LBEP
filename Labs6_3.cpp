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
	int x;
	printf("Nhap so can tim kiem: ");
	scanf("%d",&x);
//	int count = 0;
	int i=0;
	for(i=0;i<n;i++){
		if(x==arr[i]){
			printf("x nam trong mang\n"); 
		//	count++;
			break;
		}
	}
//	if(count == 0){
//		printf("x ko nam trong mang");
//	}
	if(i>=n){
		printf("x ko nam trong mang");
	}	
}
