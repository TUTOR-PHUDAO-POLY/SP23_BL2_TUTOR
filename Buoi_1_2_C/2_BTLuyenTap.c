#include <stdio.h>

int main(){
   // Tao 1 menu gồm các chức năng sau .
   // 1. Tính tổng hiệu của 2 số nhập từ bàn phím 
   // 2. Nhập vào 1 số. Kiểm tra xem đây là số chẵn hay số lẻ.
   // 3. Nhập vào 1 số . Kiểm tra đây là số nguyên dương hay không ?
   // 0. Thoát 
//   switch(gia tri ){
//       case :{
//           //
//           break;
//       }
//       default:{
//           // cac truong hop con lai 
//           break;
//       }
//   }
    int luaChon = 0;
    printf("Moi nhap lua chon:");
    scanf("%d",&luaChon);
    
    switch(luaChon){
        case 1:{
            // Tinh tong, hieu 
            printf("Day la chuc nang 1");
            break;
        }
        case 2:{
            // Kiem tra chan le 
            printf("Day la chuc nang 2");
            break;
        }
        case 3:{
            // Kiem tra so nguyen duong 
            printf("Day la chuc nang 3");
            break;
        }
        case 0:{
            break;
        }
        default:{
            printf("Chuc nang khong ton tai");
            break;
        }
    }
    return 0;
}