#include<stdio.h>

void main()
{
	// 5. B�i 5: Nh?p v�o 2 s? nguy�n a, b.
	// ? T�nh t?ng c�c s? trong kho?ng a-b.
	// ? �?m c�c s? ch?n trong kho?ng a-b.
	// ? T�m s? nh? nh?t trong kho?ng a-b.
	// ? T�m s? l?n nh?t trong kho?ng a-b.
	
	// Nhap a,b
	int a = 0;
	int b = 0;
	
	printf("Nhap a,b (a<=b)");
	printf("Nhap a");
	scanf("%d", a);
	printf("Nhap b");
	scanf("%d", b);
	
	// Kiem tra gia tri a,b thoa man
	if(a > b)
	{
		printf("Khoang nhap khong hop le. Nhap lai (a<=b)");

	}
	else
	{
		// YC1: T�nh tong c�c so trong khoang a-b.
		int tong = 0;
		
		for(int i = a; i < b; i++)
		{
			// Cong don tong
			tong += i;
		}
		
		// YC2: Dem c�c so chan trong khoang a-b.
		int demSochan = 0;
		
		for(int i = a; i < b; i++)
		{
			// Kiem tra so chan
			if(i % 2 == 0)
			{
				demSochan++;
			}
		}
		
		// YC3: Tim so nho nhat trong khoang a-b
		int soNhoNhat = a;
		
		// YC4: Tim so lon nhat trong khoang a-b
		int soLonNhat = b;

	}
}
	
