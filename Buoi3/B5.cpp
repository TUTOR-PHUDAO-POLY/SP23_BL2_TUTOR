#include<stdio.h>

void main()
{
	// 5. Bài 5: Nh?p vào 2 s? nguyên a, b.
	// ? Tính t?ng các s? trong kho?ng a-b.
	// ? Ð?m các s? ch?n trong kho?ng a-b.
	// ? Tìm s? nh? nh?t trong kho?ng a-b.
	// ? Tìm s? l?n nh?t trong kho?ng a-b.
	
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
		// YC1: Tính tong các so trong khoang a-b.
		int tong = 0;
		
		for(int i = a; i < b; i++)
		{
			// Cong don tong
			tong += i;
		}
		
		// YC2: Dem các so chan trong khoang a-b.
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
	
