#include <stdio.h>
int main(){
	int n;
	printf("Nhap n=");
	scanf("%d",&n);
	if(n<2){
		printf("khong phai so nguyen to");
	}else{
		int uoc = 0;
		for(int i=2;i<=n/2;i++){
			if(n%i==0){
				uoc++;
				break;
			}	
		}
		if(uoc == 0){
			printf("%d la so nguyen to",n);
		}else{
			printf("%d khong phai",n);
		}
	}
	
}
