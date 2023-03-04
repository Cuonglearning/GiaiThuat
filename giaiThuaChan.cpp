#include<stdio.h>
#include<conio.h>
int giaiThuaChan(int n){
	if(n==0){
		return 0;
	}
	return giaiThuaChan(n-2)+n;
}
int main(){
	int n,S;
	do{
	printf("Nhap mot so chan n=\n");scanf("%d",&n);
	if(n%2!=0){
		printf("nhap lai \n");
	}
}while(n%2!=0);
	S=giaiThuaChan(n);
	printf("S=%d",S);
	
}
