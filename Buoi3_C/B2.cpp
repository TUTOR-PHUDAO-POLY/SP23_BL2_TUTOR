#include<stdio.h>

void main()
{
	// Bài 2: Nh?p s? n t? bàn phím
	// Tính t?ng các s? ch?n t? 1 d?n n (s? d?ng for/while)
	
	// Nhap n
	int n = 0;
	printf("Nhap n:");
	scanf("%d", &n);
	
	// Tinh tong cac so chan (vong lap for/while)
	// C1: FOR
	int tongFor = 0;
	
	for(int i = 1; i < n; i++) // i<n: dieu kien chay vong lap
	{
		// Kiem tra so co phai so chan hay khong
		if(i % 2 == 0)
		{
			// Cong don cho bien tong
			tongFor += i; // tong = tong + i
		}
	}
	
	// In ra man hinh
	printf("Tong tinh duoc = %d", tongFor);
		
	// C2: WHILE
	int tongWhile = 0;
	
	int i = 1; // Khai bao
	
	while(i == n) // i=n: dieu kien dung vong lap
	{
		// Kiem tra so co phai so chan hay khong
		if(i % 2 == 0)
		{
			// Cong don cho bien tong
			tongWhile += i; // tong = tong + i
		}
		
		i++; // Buoc nhay cua i o CUOI CUNG
	}
	
	printf("Tong tinh duoc = %d", tongWhile);

	
}
	
