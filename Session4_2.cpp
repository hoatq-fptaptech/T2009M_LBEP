#include <stdio.h>
int main(){
	if(3>2){
		int x =  10;
		x++;
	}
//	printf("x=%d",x);
	for(int i=0;i<10;i++){
		printf("i= %d",i);
	}
	
//	int i=0;
//	while(i<10){
//		printf("i= %d",i);
//		i++;
//	}
//	i=0;
//	while(i<10){
//		printf("i= %d",i);
//		i++;
//	}
//	printf("sau khi chay xong i = %d",i);
	int i=0;
	do{
		printf("i= %d",i);
		i++; 
	}while(i<0);
}
