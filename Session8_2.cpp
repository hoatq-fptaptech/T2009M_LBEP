#include <stdio.h>
#include "Session8.h"

bool TimKiem(int x,int arr[],int n){
	for(int i=0;i<n;i++){
		if(x == arr[i])
			return true;
	}
	return false;
}

int main(){
	printf("So Fibo thu 9 la %d\n",Fibonaci(9));
	printf("So dao nguoc cua 254 la %d",DaoNguoc(254));
	int arr[5];
	NhapMang(arr,5);
	InMang(arr,5);
	
	int arr1[6];
	NhapMang(arr1,6);
	InMang(arr1,6);
	
	int arr2[8];
	NhapMang(arr2,8);
	InMang(arr2,8);

	if(KiemTra(5,arr2,8))
		// mang co so 5
	else 
		// mang ko co	
}
