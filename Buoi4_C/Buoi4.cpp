//Buoi 4: Su dung HAM
//1. B�i 1: Nhap v�o so n. Viet h�m kiem tra n l� so chan hay so le
//2. B�i 2: Nhap v�o so a,b v� k� tu +,-,*,/. Viet h�m thuc hien ph�p t�nh tuong ung
//3. B�i 3: Nhap v�o th�ng, nam. Viet h�m in ra so ngay cua thang
//4. B�i 4: Nhap v�o so n. T�nh tong c�c so le tu 0 toi n
//5. B�i 5: Nhap v�o so n. T�nh tich c�c so le tu 1 toi n
//6. Bai 6: Nhap v�o so n. �em xem c� bao nhi�u so chan tu 0 toi n
#include<stdio.h>
void KiemTraChanLe(int soCanKiemTra){
	if(soCanKiemTra % 2 == 0)
	{
		printf("%d la so CHAN", soCanKiemTra);
	}
	else
	{
		printf("%d la so LE", soCanKiemTra);
	}
	return;// Khong bat buoc
}

float ThucHienPhepTinh(int so1, int so2, char phepTinh){ // Bat buoc co return giaTri;
	// Co 2 so, phep tinh
	// if...else / switch...case phepTinh
	if(phepTinh == '+')
	{
		return so1 + so2; // thuc hien logic
	}
		
	switch(phepTinh)
	{
		case '+':
			return so1 + so2; // thuc hien logic
		case '-':
			return so1 - so2; // thuc hien logic
		case '*':
			return so1 * so2; // thuc hien logic
		case '/':
			return so1 / so2; // thuc hien logic
	}
}

int KiemTraSoNgay(int thang, int nam) // bat buoc co return
{
	// Thang 31 ngay: 1,3,5,7,8,10,12
	// Thang 30 ngay: 4,6,9,11
	// Thang 28/29 ngay: 2
	
	// Dieu kien: if...else/switch...case
	// Cach 1: if...else
	if(thang == 1 || thang == 3 || thang == 5 || thang == 7 || thang == 8 || thang == 10 || thang == 12)
	{
		return 31;
	}
	
	if(thang == 4 || thang == 6 || thang == 9 || thang == 11)
	{
		return 30;
	}
	
	if(thang == 2)
	{
		// Kiem tra nam nhuan
		//Nh?ng nam chia h?t cho 4 m� kh�ng chia h?t cho 100 l� nam nhu?n
		//Nh?ng nam chia h?t cho 100 m� kh�ng chia h?t cho 400 th� KH�NG PH?I l� nam nhu?n
		//Nh?ng nam chia h?t d?ng th?i cho 100 v� 400 l� nam nhu?n
		if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0 && nam % 100 == 0))
		{
			return 29;
		}
		else
		{
			return 28;
		}
	}
	
	// Cach 1: switch...case
	switch(thang)
	{
		case 1:case 3:case 5:case 7:case 8:case 10:case 12:
			return 31;
		case 4:case 6:case 9:case 11:
			return 30;
		case 2:
			if((nam % 4 == 0 && nam % 100 != 0) || (nam % 400 == 0 && nam % 100 == 0))
			{
				return 29;
			}
			else
			{
				return 28;
			}
	}
}

int TinhTongLeVongLap(int batDau, int ketThuc){ // bat buoc return
	int tong = 0;
	
	for(int i = batDau; i < ketThuc; i++)
	{
		if(i % 2 != 0) // Thoa man dieu kien -> cong don tong
		{
			tong += i;
		}
	}
	
	return tong;
}

int TinhTichLeVongLap(int batDau, int ketThuc){ // bat buoc return
	int tich = 1; // =0 -> ketqua luon luon =0
	
	for(int i = batDau; i < ketThuc; i++)
	{
		if(i % 2 != 0) // Thoa man dieu kien -> nhan don tong
		{
			tich *= i;
		}
	}
	
	return tich;
}

int DemChanVongLap(int batDau, int ketThuc){ // bat buoc return
	int dem = 0;
	
	for(int i = batDau; i < ketThuc; i++)
	{
		if(i % 2 == 0) // Thoa man dieu kien -> nhan don tong
		{
			dem++; // dem += 1; dem = dem + 1
		}
	}
	
	return dem;
}

int main(){
	// Ap dung vong lap va switch...case de tao Menu
	
	do{
		printf("MENU");
		printf("1. BAI 1");
		printf("2. BAI 2");
		printf("3. BAI 3");
		printf("4. BAI 4");
		printf("5. BAI 5");
		printf("6. BAI 6");
		printf("0. THOAT");
		printf("Luc chon:");
		int luaChon = 0;
		scanf(" %d", &luaChon);
		
		// Cac bien cua tung bai(khai bao ngoai switch...case)
		int nBai1 = 0;
		int a = 0, b = 0; char phepTinh;
		int thang = 0, nam = 0;
		int nBai4 = 0;
		int nBai5 = 0;
		int nBai6 = 0;
		
		switch(luaChon)
		{
			case 1:
				// Nhap v�o so n. Viet h�m kiem tra n l� so chan hay so le
				printf("Nhap n:");
				scanf(" %d", &nBai1);
				
				KiemTraChanLe(nBai1); // Goi ham kiem tra
				break;
			case 2:
				//Nhap v�o so a,b v� k� tu +,-,*,/. 
				//Viet h�m thuc hien ph�p t�nh tuong ung
				printf("Nhap a:");
				scanf(" %d", &a);
				printf("\nNhap b:");
				scanf(" %d", &b);
				
				printf("Nhap phep tinh:");
				scanf(" %s", &phepTinh);
								
				if(phepTinh == '+' || phepTinh == '-' || phepTinh == '*' || phepTinh == '/')
				{
					printf("Ket qua: %.3f", ThucHienPhepTinh(a, b, phepTinh));
				}
				else
				{
					printf("Phep tinh khong hop le !");
				}
				break;
			case 3:
				// Nhap v�o th�ng, nam. Viet h�m in ra so ngay cua thang
				printf("Nhap thang:");
				scanf(" %d", &thang);
				printf("\nNhap nam:");
				scanf(" %d", &nam);
				
				if(thang >= 1 && thang <= 12 && nam > 0)
				{
					// Thuc hien ham
					printf("So ngay cua thang %d / %d : %d", thang, nam, KiemTraSoNgay(thang, nam));
				}
				else
				{
					printf("Thang hoac nam khong hop le !");
				}
				break;		
			case 4:
				// Nhap v�o so n. T�nh tong c�c so le tu 0 toi n
				printf("Nhap n:");
				scanf(" %d", &nBai4);
				
				if(nBai4<0)
				{
					printf("Nhap n khong hop le (n>=0) !");
				}
				else
				{
					int tong = TinhTongLeVongLap(0,nBai4);
					printf("Tong tu 0 -> %d = %d", nBai4, tong);
					printf("Tong tu 0 -> %d = %d", nBai4, TinhTongLeVongLap(0,nBai4));					
				}
				break;		
			case 5:
				// Nhap v�o so n. T�nh tich c�c so le tu 0 toi n
				printf("Nhap n:");
				scanf(" %d", &nBai5);
				
				if(nBai5<0)
				{
					printf("Nhap n khong hop le (n>=0) !");
				}
				else
				{
					int tich = TinhTichLeVongLap(1,nBai5);
					printf("Tich tu 0 -> %d = %d", nBai5, tich);
					printf("Tich tu 0 -> %d = %d", nBai5, TinhTichLeVongLap(1,nBai5));					
				}
				break;	
			case 6:
				// Nhap v�o so n. �em xem c� bao nhi�u so chan tu 0 toi n
				printf("Nhap n:");
				scanf(" %d", &nBai6);
				
				if(nBai6 < 0)
				{
					printf("Nhap n khong hop le (n>=0) !");
				}
				else
				{
					printf("So chan tu 0 -> %d gom %d so", nBai6, DemChanVongLap(0,nBai6));					
				}
				break;
			case 0:
				printf("BAN DA THOAT !");
				return 0;	
			default:
				printf("Nhap chuc nang hop le (0-6) !");
				break;		
		}
			
			
	} while(true);
	
	return 0;
}
