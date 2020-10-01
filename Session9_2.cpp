#include <stdio.h>
#include <string.h>
int main(){
	char s1[20],s2[20];
	printf("Nhap s1= ");
	scanf("%s",s1);
	printf("Nhap s2= ");
	scanf("%s",s2);
	printf("S1 sau khi nhap: %s\n",s1);// xinchao
	printf("S2 sau khi nhap: %s\n",s2);//t2009m
	
	strcat(s1,s2); // s1= s1+s2	
	printf("S1= %s\n",s1);// xinchaot2009m
	printf("S2= %s\n",s2);// t2009m
	
	strcat(s2,s1); // s2 = s2+s1;
	printf("S1= %s\n",s1);//xinchaot2009m
	printf("S2= %s\n",s2);// t2009mxinchaot2009m
	
	if(strcmp(s1,s2)>0){
		printf("s1 sau s2");
	}else if(strcmp(s1,s2)<0){
		printf("s1 truoc s2");
	}else{
		printf("s1 == s2");
	}
	
	int vitri = strchr(s2,'m') - s2;// cong thuc tim vi tri cua ky tu trong chuoi
	printf("\nvi tri cua 'm' trong s2: %d\n",vitri);
	
	strcpy(s1,s2);//=> s1= s2;
	printf("S1= %s\n",s1);//t2009mxinchaot2009m
	printf("S2= %s\n",s2);// t2009mxinchaot2009m
	int len = strlen(s1);
	printf("Do dai s1: %d",len);
}
