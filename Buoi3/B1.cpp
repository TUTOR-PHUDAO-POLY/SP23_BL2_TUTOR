#include<stdio.h>

void main()
{
	//1. B�i 1: X�y d?ng chuong tr�nh nh?p v�o 2 s? a, b t? b�n ph�m
	//? Nh?p 1 k� t? (+, -, *, /, %) t? b�n ph�m
	//? N?u k� t? + th� t�nh t?ng a+ b v� in ra m�n h�nh
	//? N?u k� t? - th� t�nh hieu a- b v� in ra m�n h�nh
	//? N?u k� t? * th� t�nh tich a* b v� in ra m�n h�nh
	//? N?u k� t? / th� t�nh thuong a/ b v� in ra m�n h�nh
	//? N?u k� t? % th� t�nh chia lay du a % b v� in ra m�n h�nh
	
	// B1: Nhap a, b tu ban phim
	int a = 0;
	int b = 0;
	
	printf("Nhap a:");
	scanf("%d", &a);
	printf("Nhap b:");
	scanf("%d", &b);
	
	// B2: Nhap phep tinh (+, -, *, /, %)
	char phepTinh = "";
	scanf("%s", &phepTinh);
	
	// B3: Tinh toan va in ra man hinh
	// C1: su dung if...else
	if(phepTinh == "+")
	{
		printf("a + b = %d", a + b);
	}
	else if(phepTinh == "-")
	{
		printf("a - b = %d", a - b);
	}
	else if(phepTinh == "*")
	{
		printf("a * b = %d", a * b);
	}
	else if(phepTinh == "/")
	{
		printf("a / b = %d", a / b);
	}
	else if(phepTinh == "%")
	{
		printf("a % b = %d", a % b);
	}
	else
	{
		printf("Khong co phep tinh nao phu hop");
	}

	
	// C2: switch...case
	switch(phepTinh)
	{
		case "+":
			printf("a + b = %d", a + b);
			break;
		case "-":
			printf("a - b = %d", a - b);
			break;
		case "*":
			printf("a * b = %d", a * b);
			break;
		case "/":	
			printf("a / b = %d", a / b);
			break;	
		case "%":
			printf("a % b = %d", a % b);
			break;
		default:
			printf("Khong co phep tinh nao phu hop");
			break;		
	}
	
	
}
	
