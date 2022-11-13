
#include <stdio.h>

//printf("formatstring", argument_list)

//VD formatstring : %d(so nguyen) , %c(ky tu),%s(chuoi),%f(so thuc)

/*De hien thi so thuc ta su dung %.wf trong do w la 1 so tu nhien
va la so ky tu sau dau cham chung ta can , VD : %.2f -> xuat ra so thuc
co phan sau dau cham chi lay 2 chu so
\n xuong dong
*/

int main(){
	//int
	int a = 5;
	printf("in ra so nguyen a \n");
	printf("gia tri a = %d \n",a);
	//float
	float b = 6.123456;
	float d = 5.123456;
	printf("gia tri b = %f \n", b);
	printf("in ra b va chi lay 2 so sau dau cham \n");
	printf("gia tri b = %.2f \n", b);
	// in ra 2 so float b , d 
	printf("gia tri cua b = %.2f , gia tri cua d = %.3f \n" , d , b);
	//char
	char c = 'a';
	printf("in ra  gia tri cua c \n");
	printf("gia tri cua c la = %c \n",c);	
	
}

