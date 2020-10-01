#include <stdio.h>
bool KtSNT(int n){
	if(n<2) return false;
	if(n<=3) return true;
	for(int i=2;i<=n/2;i++){
		if(n%i==0)
		 	return false;
	}
	return true;
}

int SoNTTiepTheo(int n){
	for(int i=n+1;true;i++){
		// kiem tra xem i co phai SNT hay ko
		// neu dung thi tra ve i luon va dung ham
		if(KtSNT(i))
			return i;
	}
}
int main(){
	int n=25;
	printf("SNT tiep theo: %d",SoNTTiepTheo(n));
}
