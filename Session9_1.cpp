#include <stdio.h>
int main(){
	char s[20];// string la mang ky tu, ket thuc bang null ( \0 )
//	for(int i=0;i<20;i++){
//		scanf("%c",&s[i]);
//	}
	printf("Nhap chuoi: ");
	scanf("%s",s);
	//gets(s); // nhap chuoi, tuong duong scanf -> han che dung
	// unsafe
	printf("Chuoi vua nhap xong: %s",s);
	// puts(s); tuong duong printf("%s",s);
}
