#include<stdio.h>

void main()
{
	// 4. B�i 4: Nh?p s? nguy�n n.
	// ? In ra c�c s? ch?n trong kho?ng 1-n.
	// ? �?m c�c s? l? trong kho?ng 1-n.
	// ? In ra t?ng c�c s? ch?n trong kho?ng 1-n.
	// ? In ra t?ng c�c s? chia h?t cho 3 trong kho?ng 1-n.
	// ? T�nh trung b�nh c?ng c�c s? ch?n trong kho?ng 1-n.
	
	// Nhap n
	int n = 0;
	printf("Nhap n");
	scanf("%d", n);
	
	// YC1: In ra cac so chan 1-n
	printf("Cac so chan 1-n: ");
	
	for(int i = 0; i < n; i++)
	{
		// Kiem tra so i
		if(i % 2 == 0)
		{
			// In ra man hinh
			printf("%d ", i);
		}
	}
	
	// YC2: Dem so le 1-n
	int demSoLe = 0;
	
	for(int i = 0; i < n; i++)
	{
		// Kiem tra so i
		if(i % 2 != 0)
		{
			// Cong don demSoLe
			demSoLe++; // demSoLe += 1; demSoLe = demSoLe +1;
		}
	}
	
	// YC3: In ra tong c�c so chan trong khoang 1-n
	int tongSoChan = 0;
	int demSoChan = 0;
	
	for(int i = 0; i < n; i++)
	{
		// Kiem tra so i
		if(i % 2 == 0)
		{
			// Cong don tong
			tongSoChan += i;
			demSoChan++;
		}
	}
	
	// YC4: In ra tong c�c so chia het cho 3 trong khoang 1-n.
	int tongChiaHet3 = 0;
	
	for(int i = 0; i < n; i++)
	{
		// Kiem tra so i
		if(i % 3 == 0)
		{
			// Cong don tong
			tongChiaHet3 += i;
		}
	}
	
	// YC5: T�nh trung b�nh cong c�c so chan trong khoang 1-n.
	// TBC: tongSoChan/demSoChan
	
	float trungBinhCong = (float)tongSoChan/demSoChan; // int/int -> int; float/int => float

}
	
