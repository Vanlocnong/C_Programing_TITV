#include <stdio.h>
#include <conio.h>

int main () {
	/*
	== : so sanh bang
	> : so sanh lon hon
	< : so sanh nho hon
	!= : so sanh khac
	>= : nho hon or bang
	<= : lon hon hoac bang
	
	ket qua : - true = 1
			  - false = 0
	*/
	
	int a , b;
	
	printf("\n nhap vao so a = ");
	scanf("%d" , &a);
	printf("\n nhap vao so b = ");
	scanf("%d", &b);
	// a  = 1 , b = 2
	printf("\n %d == %d la %d" , a , b , a == b); // a == b la 0
	printf("\n %d > %d la %d" , a , b , a > b); // a > b la 0
	printf("\n %d < %d la %d" , a , b , a < b); // a < b la 1
	printf("\n %d != %d la %d" , a , b , a != b); // a != b la 1
	printf("\n %d >= %d la %d" , a , b , a >= b); // a >= b la 0
	printf("\n %d <= %d la %d" , a , b , a <= b); // a <= b la 1
}
