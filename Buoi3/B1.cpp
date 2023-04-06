#include<stdio.h>

void main()
{
	//1. Bài 1: Xây d?ng chuong trình nh?p vào 2 s? a, b t? bàn phím
	//? Nh?p 1 ký t? (+, -, *, /, %) t? bàn phím
	//? N?u ký t? + thì tính t?ng a+ b và in ra màn hình
	//? N?u ký t? - thì tính hieu a- b và in ra màn hình
	//? N?u ký t? * thì tính tich a* b và in ra màn hình
	//? N?u ký t? / thì tính thuong a/ b và in ra màn hình
	//? N?u ký t? % thì tính chia lay du a % b và in ra màn hình
	
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
	
