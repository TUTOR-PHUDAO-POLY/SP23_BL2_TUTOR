#include<stdio.h>

void main()
{
	// 4. Bài 4: Nh?p s? nguyên n.
	// ? In ra các s? ch?n trong kho?ng 1-n.
	// ? Ð?m các s? l? trong kho?ng 1-n.
	// ? In ra t?ng các s? ch?n trong kho?ng 1-n.
	// ? In ra t?ng các s? chia h?t cho 3 trong kho?ng 1-n.
	// ? Tính trung bình c?ng các s? ch?n trong kho?ng 1-n.
	
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
	
	// YC3: In ra tong các so chan trong khoang 1-n
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
	
	// YC4: In ra tong các so chia het cho 3 trong khoang 1-n.
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
	
	// YC5: Tính trung bình cong các so chan trong khoang 1-n.
	// TBC: tongSoChan/demSoChan
	
	float trungBinhCong = (float)tongSoChan/demSoChan; // int/int -> int; float/int => float

}
	
