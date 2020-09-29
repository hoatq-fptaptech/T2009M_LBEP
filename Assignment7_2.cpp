#include <stdio.h>
int main(){
	int n;
	printf("Nhap n= ");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		bool flag;
		int x;
		do{
			flag = false;// reset gia tri kiem tra
			printf("Nhap gia tri arr[%d]= ",i);
			scanf("%d",&x);
			// tim x trong mang tu 0 -> i-1
			for(int j=0;j<i;j++){
				if(arr[j]==x){
					flag= true;
					break;
				}
			}
			if(!flag){ // flag == false
				arr[i]= x;
			}
		}while(flag);
	}
	printf("Mang sau khi nhap gia tri:\n");
	for(int i=0;i<n;i++){
		printf("%5d",arr[i]);
	}
}
