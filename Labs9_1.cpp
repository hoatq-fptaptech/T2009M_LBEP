#include <stdio.h>
#include <string.h>
int main(){
	char s[20];
	printf("Nhap chuoi: ");
	scanf("%s",s);
	int a=0,e=0,i=0,o=0,u=0;
	for(int j=0;j<strlen(s);j++){
		if(s[j] == 'A'|| s[j]=='a')
			a++;
		else if(s[j]== 'E' || s[j] == 'e')
			e++;
		else if(s[j]== 'I' || s[j] == 'i')
			i++;
		else if(s[j]== 'O' || s[j] == 'o')
			o++;	
		else if(s[j]== 'u' || s[j] == 'u')
			u++;	
	}
	printf("a: %d; e: %d; i: %d; o: %d; u: %d;",a,e,i,o,u);
}
