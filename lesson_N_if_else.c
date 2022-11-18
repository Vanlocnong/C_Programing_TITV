#include <stdio.h>
#include <conio.h>


int main (){
	int a , b; // khai bao bien a va b
	
	printf(" nhap so a = ");
	scanf("%d" , &a); // scanf() nhap du lieu tu ban phim
	printf(" \nnhap so b = ");
	scanf("%d" , &b);
	
	if(a % 2 != 0){
		printf("\n %d la so le" , a);
	}else{
		printf("\n %d la so chan" , a);
	};
}
