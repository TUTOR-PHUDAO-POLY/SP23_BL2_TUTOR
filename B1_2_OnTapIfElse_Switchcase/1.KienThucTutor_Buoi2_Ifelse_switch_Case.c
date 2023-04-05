// I. Buổi 1: Biến, Kiểu dữ liệu, Toán tử, if/else-switch/case.

// 1. Bài 1: Nhập vào 3 số nguyên a, b, c.

// ● In ra tổng, hiệu, tích, thương của 3 số.

// ● Tính (a + b) * c và in ra màn hình.

// ● Tạo menu cho các yêu cầu trên

// 2. Bài 2: Nhập 2 cạnh a,b

// ● Nếu a = b => tính diện tích hình vuông và in ra màn hình

// ● Nếu a != b => tính diện tích hcn và in ra màn hình

// 3. Bài 3: Xây dựng chương trình tính điểm trung bình:

// ● Nhập điểm toán văn anh từ bàn phím

// ● Tính điểm trung bình = (toán + văn + anh)/3

// ● Nếu 0<= điểm trung bình <= 4 in ra màn hình ‘Học yếu’

// ● Nếu 4< điểm trung bình < 6 in ra màn hình ‘Học trung bình’

// ● Nếu 6< = điểm trung bình <8 in ra màn hình ‘Học khá’

// ● Nếu 8<= điểm trung bình <=10 in ra màn hình ‘Học giỏi’

// II. Buổi 2: Vòng lặp

// 1. Bài 1: Xây dựng chương trình nhập vào 2 số a, b từ bàn phím

// ● Nhập 1 ký tự (+, -, *, /, %) từ bàn phím

// ● Nếu ký tự + thì tính tổng a+ b và in ra màn hình

// ● Nếu ký tự - thì tính tổng a- b và in ra màn hình

// ● Nếu ký tự * thì tính tổng a* b và in ra màn hình

// ● Nếu ký tự / thì tính tổng a/ b và in ra màn hình

// ● Nếu ký tự % thì tính tổng a% b và in ra màn hình

// 2. Bài 2: Nhập số n từ bàn phím. Tính tổng các số chẵn từ 1 đến n (sử dụng for/while)

// 3. Bài 3: Sử dụng while làm menu. Nhập 1 ký tự từ bàn phím. Nếu là ký tự ‘y’ => tiếp tục cho nhập, ‘n’ => dừng việc nhập

// 4. Bài 4: Nhập số nguyên n.

// ● In ra các số chẵn trong khoảng 1-n.

// ● Đếm các số lẻ trong khoảng 1-n.

// ● In ra tổng các số chẵn trong khoảng 1-n.

// ● In ra tổng các số chia hết cho 3 trong khoảng 1-n.

// ● Tính trung bình cộng các số chẵn trong khoảng 1-n.

// 5. Bài 5: Nhập vào 2 số nguyên a, b.

// ● Tính tổng các số trong khoảng a-b.

// ● Đếm các số chẵn trong khoảng a-b.

// ● Tìm số nhỏ nhất trong khoảng a-b.

// ● Tìm số lớn nhất trong khoảng a-b.
#include <stdio.h>

int main(){
    //1. Bài 1: Nhập vào 3 số nguyên a, b, c.
    int a;
    int b;
    int c;
    
    printf("Nhap a:");
    scanf("%d",&a);
    printf("Nhap b:");
    scanf("%d",&b);
    printf("Nhap c:");
    scanf("%d",&c);
    
     //● Tạo menu cho các yêu cầu trên
    // Hiển thị menu -> Cho người dùng lựa chọn chức năng -> Thực hiện chức năng tương ứng
    //
    do{
        printf("=========MENU=========");
        printf("1. yc 1");
        printf("2. yc 2");
        printf("0. Thoat");
        printf("Chon chuc nang: ");

        char luaChon;
        scanf("%c", &luaChon);
    
        switch(luaChon){
            case '1':{
                //● YC1: In ra tổng, hiệu, tích, thương của 3 số.
                int tong = a+b+c;
                int hieu = a-b-c;
                int tich = a*b*c;
                float thuong = (float)(a/b)/c; // Có thể lẻ sau dấu phẩy -> int/int => int(0.55->0) float/int => float(0.55=>0.55)
                
                printf("Tong: %d\n", tong);
                printf("Hieu: %d\n", hieu);
                printf("Tich: %d\n", tich);
                printf("Thuong: %f", thuong);
                break;
            }
                
            case '2':{
                 //● YC2: Tính (a + b) * c và in ra màn hình.
                int congThuc = (a + b) * c;
                printf("Cong thuc: %d", congThuc);
                break;
            }
            case '0':{
                printf("BAN DA THOAT !");
                break;
            }
            default:{
                printf("Nhap lai. Danh sach chuc nang 0-2");
                break;
            }
        }

    }while(1);
    
    return 0;
}
