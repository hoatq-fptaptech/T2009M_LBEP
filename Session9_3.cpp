#include <stdio.h>
#include <string.h>
void Upercase(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=97 && s[i]<=122){
			s[i] -= 32;
		}
	}
}
int main(){
	char s[20];
	printf("Nhap chuoi: ");
	scanf("%s",s);
	Upercase(s);
	printf("Sau khi chuyen doi: %s\n",s);
}
