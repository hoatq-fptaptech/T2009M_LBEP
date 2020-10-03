#include <stdio.h>
int main(){
	int arr[5]; // thuc ra arr cung chinh la con tro giu dia chi cua arr[0]
	int *a;
	a = &arr[0];
	(*a) = 10; // arr[0] = 10;
	(*a)++; // arr[0] = 11;
	a++;// chuyen qua nha arr[1]
	(*a) = 20;// arr[1] = 20;
	(*a)++;// arr[1] = 21;
	a++;
	(*a) = 22;// arr[2] = 22;
	*(a+2) = 12;// arr[4] = 12;
	//a = &arr[0];
	for(int i=0;i<5;i++){
		//arr[i] = 100;
		*(arr+i) = 100;
	}
	// a` hinh nhu phai 10 phan tu moi dung
	// Cap phat dong -> co the thay doi duoc so luong phan tu cua mang tai thoi diem su dung
}
