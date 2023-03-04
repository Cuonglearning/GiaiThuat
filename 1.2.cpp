#include <stdio.h>
#include <conio.h>

int SoNguyen,TuSo,MauSo;
void Nhap()
{
	printf("Hay nhap so nguyen: \n");
	scanf("%d", &SoNguyen);
	printf("Hay nhap tu so: \n");
	scanf("%d", &TuSo);
	do{
		printf("Hay nhap Mau so: \n");
		scanf("%d", &MauSo);
		if(MauSo==0){
			printf("Mau so phai khac khong!");
		}
		}while(MauSo==0);	
	}


void Xuat()
{
	printf("%d(%d/%d)", SoNguyen, TuSo, MauSo);
}
int main()
{
	Nhap();
	Xuat();
	return 0;
}

