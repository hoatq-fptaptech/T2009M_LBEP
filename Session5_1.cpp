#include <stdio.h>
int main(){
	for(int i=1;i<=10;i++){
		printf("Bat dau quet don tang %d\n",i);
		if(i==5)
			continue;
			//break;
		printf("Don dep xong tang %d\n",i);
	}
}
