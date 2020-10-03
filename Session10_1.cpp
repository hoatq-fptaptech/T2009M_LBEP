#include <stdio.h>
#include <iostream> // tim cach demo dia chi
int main(){
	int x=10;
	printf("x = %d\n",x);
	printf("Day la dia chi cua x:\n");
	std::cout << &x;
	printf("\nGia tri cua x:");
	std::cout << *(&x);
	int *p;// khai bao p la bien con tro
	p = &x;
	printf("\nGia tri cua p:");
	std::cout << p;
	x++;
	printf("\nx = %d\n",x);//x = 11;
	(*p)++;// *p chinh la x
	printf("x = %d\n",x); // 12
	int y = 20;
	p = &y;
	(*p)++;// tham chieu gian tiep
	printf("x = %d\n",x); // 12
	printf("y = %d\n",y); // 21
}
