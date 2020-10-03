#include <stdio.h>
#include <string.h>
int main(){
	char s1[20],s2[20];
	printf("Nhap s1= ");
	scanf("%s",s1);
	printf("Nhap s2= ");
	scanf("%s",s2);
	if(strlen(s1) < strlen(s2)){
		printf("%s khong chua %s",s1,s2);
	}else{
		for(int i=0;i<strlen(s1);i++){
			if(s1[i]== s2[0]){
				int n = strlen(s2);
				int count = 0;// dem so luong ky tu giong nhau lien tiep
				for(int j=0;j<n;j++){
					if(s1[i+j] == s2[j]){
						count++;
					}else{
						break;
					}
				}
				if(count ==n){
					printf("%s chua %s",s1,s2);
					break;
				}
			}
		}
	}
}
