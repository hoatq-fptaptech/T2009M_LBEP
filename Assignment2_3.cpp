#include <stdio.h>
int main(){
	int d,m;
	printf("Nhap ngay:");
	scanf("%d",&d);
	printf("nhap thang:");
	scanf("%d",&m);
	if(m>12){
		printf("thang nhap sai, phai tu 1-12");
	}else{
		if(m<0){
			printf("thang nhap sai, phai tu 1-12");	
		}else{
			if(m==1){
				printf("Day la ngay thu: %d trong nam",d);
			}
			if(m==2){
				printf("Day la ngay thu: %d trong nam",d+31);
			}
			if(m==3){
				printf("Day la ngay thu: %d trong nam",d+31+28);
			}
			if(m==4){
				printf("Day la ngay thu: %d trong nam",d+31+28+31);
			}
			if(m==5){
				printf("Day la ngay thu: %d trong nam",d+31+28+31+30);
			}
			if(m==6){
				printf("Day la ngay thu: %d trong nam",d+31+28+31+30+31);
			}
			if(m==7){
				printf("Day la ngay thu: %d trong nam",d+31+28+31+30+31+30);
			}
			if(m==8){
				printf("Day la ngay thu: %d trong nam",d+31+28+31+30+31+30+31);
			}
			if(m==9){
				printf("Day la ngay thu: %d trong nam",d+31+28+31+30+31+30+31+31);
			}
			if(m==10){
				printf("Day la ngay thu: %d trong nam",d+31+28+31+30+31+30+31+31+30);
			}
			if(m==11){
				printf("Day la ngay thu: %d trong nam",d+31+28+31+30+31+30+31+31+30+31);
			}
			if(m==12){
				printf("Day la ngay thu: %d trong nam",d+31+28+31+30+31+30+31+31+30+31+30);
			}
		}
	}
	
}
