#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef struct SinhVien{
	int MaSo;
	char Ten[50];// string
	int Diem;
}SinhVien;
struct GiaoVien{
	char Ten[50];
	int Tuoi;
};
struct LopHoc{
	char TenLop[50];
	char Phong[20];
	int SL;
	struct GiaoVien GVCN;
};
typedef int abc; // dat lai ten cho kieu du lieu int la abc
int main(){
	struct SinhVien x;// khai bao bien x co kieu du lieu struct SinhVien
	x.MaSo = 1;
	strcpy(x.Ten,"LeVanNam");
	x.Diem = 10;
	SinhVien arr[25];
	for(int i=0;i<25;i++){
		printf("nhap Ma so: ");
		scanf("%d",&arr[i].MaSo);
		printf("Nhap Ten SV: ");
		scanf("%s",arr[i].Ten);
		printf("Nhap Diem SV: ");
		scanf("%d",&arr[i].Diem);
	}
	struct LopHoc t2009m;
	t2009m.GVCN.Tuoi = 18;
	SinhVien *ars;
	//ars = (SinhVien *)malloc(5*sizeof(SinhVien));
	ars = (SinhVien *)calloc(5,sizeof(SinhVien));
	// SinhVien ars[5]
	for(int i=0;i<5;i++){
		printf("nhap Ma so: ");
		scanf("%d",&((ars+i)->MaSo));// (ars+i)->MaSo <=> ars[i].MaSo
		//scanf("%d",&ars[i].MaSo);
	}
}
