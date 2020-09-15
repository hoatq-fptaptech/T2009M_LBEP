#include <stdio.h>
int main(){
	int A;
	printf("Nhap A=");
	scanf("%d",&A);
	if(A>0&& A<=9999){
		// tim so nghich dao
		int B=0;
		B = B*10 + A%10;
		A/=10;
		if(A!=0){
			B = B*10 + A%10;
			A/=10;
		}
		if(A!=0){
			B = B*10 + A%10;
			A/=10;
		}
		if(A!=0){
			B = B*10 + A%10;
			A/=10;
		}
		printf("Nghich dao: %d",B);
	}else{
		printf("Gia tri nhap vao khong dung");
	}
}
