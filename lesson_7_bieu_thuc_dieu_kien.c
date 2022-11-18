#include <stdio.h>
#include <conio.h>

int main (){
	/*
	logic_1 ? logic_2 : logic_3;
	
	neu logic_1 la True , thi logic_2 dc tinh toan va
	tro thanh gia tri cua toan bo logic ?
	
	neu logic_1 la False , thi logic_3 dc tinh toan va
	tro thanh gia tri cua toan bo logic ?
	*/
	
	int a , b;

	printf("input a = ");
	scanf("%d" , &a);
	printf("\n input b = ");
	scanf("%d" , &b);
	int c = a < b ? 0 : 1;
	//printf("\n %d" , c); // 0
	printf("\n %d la so %s" , a , (a % 2 == 0 )?"Chan":"le");
}
