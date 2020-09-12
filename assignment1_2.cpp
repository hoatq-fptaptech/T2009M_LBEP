#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	printf("Nhap a=");
	scanf("%d",&a);	
	
	printf("Nhap b=");
	scanf("%d",&b);
	
	printf("Nhap c=");
	scanf("%d",&c);
	
	if(a==0){
		if(b==0){
			if(c==0){
				printf("pt vo so nghiem");
			}else{
				printf("pt vo nghiem");
			}
		}else{
			printf("x = %d",(-c/b));
		}
	}else{
		int d = b*b - (4*a*c);
		if(d<0){
			printf("pt vo nghiem");
		}else{
			if(d==0){
				printf("x= %d",(-b/(2*a)));
			}else{
				printf("x1 = %f",((-b+sqrt(d))/(2*a)));
				printf("x2 = %f",((-b-sqrt(d))/(2*a)));
			}
		}
	}
}

