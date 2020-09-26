#include <stdio.h>
int main(){
	int arr[5] = {23,90,9,25,16};
	
	for(int i=1;i<5;i++){
		int v=i-1;// lay vi tri phia truoc
		int tmp =arr[i];
		while(v>=0&& arr[v]>tmp){
			arr[v+1] = arr[v];
			v--;
		}
		arr[v+1] = tmp;
	}
	printf("Mang sau khi sap xep:\n");
	for(int i=0;i<5;i++){
		printf("%5d",arr[i]);
	}
}
