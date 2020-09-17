#include <stdio.h>
int main(){
//	int n;
//	printf("Nhap so nam muon gui ngan hang:");
//	scanf("%d",&n);
	float S=1000,ls=0.08;
	int i;
//	for(i=0;S<1000000;i++){
//		S+= S*ls;
//	}
	i=0;
	while(S<1000000){
		S+= S*ls;
		i++;	
	}
	printf("So tien nhan duoc: %f sau %d nam",S,i);
		
}

