#include <stdio.h>

/*
+ , - , & , / , %

++ , -- co the dat truoc hoac sau toan hang

*/

int main(){
	int a,b;
	
	printf("nhap so a \n");
	scanf("%d" , &a);
	printf("nhap so b \n");
	scanf("%d" , &b);
	int tong = a + b;
	printf("%d  + %d  = %d \n", a , b, tong);
	
	int hieu = a - b;
	printf("%d  - %d  = %d \n", a , b, hieu);
	
	int tich = a * b;
	printf("%d  * %d  = %d \n", a , b, tich);
	
	int thuong = a / b;
	printf("%d  / %d  = %d \n", a , b, thuong);
	
	int chia_lay_du = a % b;
	printf("%d  chia lay du %d  = %d \n", a , b, chia_lay_du);
	
	a++;
	printf("a++ = %d\n" , a);
	
	--b;
	printf("--b = %d", b);
}


