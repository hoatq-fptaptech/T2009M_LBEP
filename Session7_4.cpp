#include <stdio.h>
int main(){
	int arr[15] = {6,13,14,25,33,43,51,53,64,72,84,93,95,96,97};
	int lo = 0;
	int hi = 14;
	int search = 33;
	bool flag = false;
	while(lo <=hi){
		int mid = (lo+hi)/2;
		if(search == arr[mid]){
			flag = true;
			break;
		}else if(search > arr[mid]){
			lo = mid+1;
		}else{
			hi = mid-1;
		}
	} 
	if(flag){
		printf("Da tim thay!");
	}else{
		printf("khong tim thay");
	}
}
