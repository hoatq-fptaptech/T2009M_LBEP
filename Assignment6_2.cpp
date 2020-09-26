#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("nhap pt thu %d: ",i);
		scanf("%d",&arr[i]);
	}
	int min=0;
	for(int i=0;i<n;i++){
		if(arr[i]>0){
			min = arr[i];
			break;
		}
	}
	if(min==0){
		printf("mang ko co so duong");
	}else{
		for(int i=0;i<n;i++){
			if(arr[i]<min && arr[i]>0){
				min = arr[i];
			}
		}
		printf("So duong nho nhat: %d",min);
	}
	
}
