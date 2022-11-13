#include <stdio.h>


//printf xuat ra du lieu ra bang dieu khien

//scanf nhap du lieu tu ban phim thong qua cua so control

/*
cu phap scanf():
				scanf("formatstring",argument_address_list);
				Dia chi cua bien la: &ten_bien

//VD formatstring : %d(so nguyen) , %c(ky tu),%s(chuoi),%f(so thuc)				
*/

int main(){
	int a;
	float b;
	char c;
	
	//nhap ky tu (char)
	printf("nhap ky tu\n");
	scanf("%c", &c);
	printf("gia tri cua c = %c \n", c);
	
	// nhap so nguyen
	printf("Nhap gia tri so nguyen \n");
	scanf("%d", &a);
	printf("gia tri cua a = %d \n", a);
	
	//nhap so float
	printf("nhap gia tri float \n");
	scanf("%f",&b);
	printf("gia tri cua b la = %.2f\n", b);
	
	
	
}

