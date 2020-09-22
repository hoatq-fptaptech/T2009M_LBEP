#include <stdio.h>
int main(){
	int x =0;
	Start: printf("xin chao\n");
	x++;
	goto TenLop;
	printf("ca lop\n");
	TenLop: printf("T2009M");
	if(x<10){
		goto Start;
	}
	
}
