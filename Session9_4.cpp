#include <stdio.h>
#include <string.h>

int main(){
	int n;
	printf("Nhap n =");
	scanf("%d",&n);
	char ars[n][20];// day la mang 5 string
	for(int i=0;i<n;i++){
		// 1 chuoi can xu ly -> ars[i]
		printf("Nhap chuoi thu %d: ",i);
		scanf("%s",ars[i]);
	}
	printf("Sau khi nhap xong:\n");
	for(int i=0;i<n;i++){
		printf("%s\n",ars[i]);
	}
	char s[20];
	strcpy(s,ars[0]); // s = ars[0]
	for(int i=0;i<n;i++){
		if(strlen(ars[i]) > strlen(s)){
			strcpy(s,ars[i]);
		}
	}
	printf("chuoi dai nhat: %s",s);
}
