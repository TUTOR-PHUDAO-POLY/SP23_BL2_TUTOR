#include<stdio.h>

void main()
{
	//3. Bài 3: S? d?ng WHILE làm menu
	// Nh?p 1 ký t? t? bàn phím. 
	// N?u là ký t? ‘y’ => ti?p t?c cho nh?p, ‘n’ => d?ng vi?c nh?p
	
	bool ketThuc = false; // Gia tri ban dau = false de chay vong lap While
	
	while(ketThuc) // ketThuc: dieu kien dung cua vong lap
	{
		printf("MENU");
		printf("y. Tiep tuc vong lap");
		printf("n. Ket thuc vong lap");
		printf("Nhap lua chon");
		
		char luaChon = "";
		scanf("%s", &luaChon);
		
		// Kiem tra thong tin nguoi dung vua nhap (luaChon)
		switch(luaChon)
		{
			case 'y':
				printf("Tiep tuc vong lap");
				break;
			case 'n':
				printf("Ket thuc vong lap");
				ketThuc = true; // Gan gia tri ketThuc = true => ket thuc vong lap
				break;
			default:
				printf("Nhap lai. Chi nhap y/n");
				break;
		}
	}
}
	
