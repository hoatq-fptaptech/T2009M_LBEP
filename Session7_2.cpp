#include <stdio.h>
int main(){
	int arr[5] = {23,90,9,25,16};
	for(int i=0;i<5-1;i++){
		for(int j=0;j<5-1-i;j++){
			if(arr[j]>arr[j+1]){
				int tmp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = tmp;
			}
		}
	}
	printf("Sau khi sap xep xong:\n");
	for(int i=0;i<5;i++){
		printf("%5d",arr[i]);
	}
}
