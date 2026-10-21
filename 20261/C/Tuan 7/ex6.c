/*
1. Viết hàm Tính S(n) = 1^2 + 2^2 +3^2  + ... + n^2
2. Viết hàm Tính tổng các giá trị lẻ nguyên dương nhỏ hơn N
3. Viết hàm Xác định tính nguyên tố của N
4. Viết hàm lấy ra số lượng số chẵn của một dãy số nguyên.
5. Viết Hàm tính căn bậc 2 của một số nguyên được tạo thành từ 4 số nguyên có 1 chữ số.
6. Viết chương trình chính sử dụng các hàm trên
7. Định nghĩa một struct mô tả một điểm trong không gian 2 chiều. Giá trị của hoành độ và tung độ là số thực kiểu float.
- Viết hàm nhập tọa độ cho một điểm
- Viết một hàm tính khoảng cách giữa 2 điểm
- Viết một hàm thay đổi tọa độ của một điểm.
- Viết một hàm hiển thị tọa độ của một điểm theo định dạng (hoành độ, tung độ)
*/

#include <stdio.h>
#include <math.h>

typedef struct {
    float x;
    float y;
} Point;

Point nhapToaDo(Point p) {
    printf("Nhap hoanh do: ");
    scanf("%f", &p.x);
    printf("Nhap tung do: ");
    scanf("%f", &p.y);
    return p;
}

float khoangCach(Point p1, Point p2) {
    return sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
}

void thayDoiToaDo(Point *p, float X, float Y) {
    p->x = X;
    p->y = Y;
}

void hienThiToaDo(Point p) {
    printf("Toa do: (%.2f, %.2f)\n", p.x, p.y);
}

void ex7(){
    Point p1, p2;
    printf("Nhap toa do diem 1:\n");
    p1 = nhapToaDo(p1);
    printf("Nhap toa do diem 2:\n");
    p2 = nhapToaDo(p2);
    
    int n;
    printf("Chon thao tac:\n");
    printf("1. Tinh khoang cach giua 2 diem\n");
    printf("2. Thay doi toa do diem 1\n");
    printf("3. Hien thi toa do diem 1\n");
    printf("Nhap lua chon: ");
    scanf("%d", &n);
    switch(n) {
        case 1:
            printf("Khoang cach giua 2 diem: %.2f\n", khoangCach(p1, p2));
            break;
        case 2: {
            float X, Y;
            printf("Nhap hoanh do moi: ");
            scanf("%f", &X);
            printf("Nhap tung do moi: ");
            scanf("%f", &Y);
            thayDoiToaDo(&p1, X, Y);
            break;
        }
        case 3:
            hienThiToaDo(p1);
            break;
        default:
            printf("Lua chon khong hop le.\n");
    }
}

void ex1(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += pow(i, 2);
    }
    printf("S(%d) = %d\n", n, sum);
}

void ex2(){
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i < n; i++){
        if(i % 2 != 0){
            sum += i;
        }
    }
    printf("Tong cac gia tri le nho hon %d la: %d\n", n, sum);
}

void ex3(){
    int n, i, nguyenTo = 1;
    printf("Nhap mot so nguyen duong: ");
    scanf("%d", &n);
    if(n < 2){
        nguyenTo = 0;
    } else {
        for(i = 2; i <= sqrt(n); i++){
            if(n % i == 0){
                nguyenTo = 0;
                break;
            }
        }
    }
    if(nguyenTo){
        printf("%d la so nguyen to.\n", n);
    } else {
        printf("%d khong phai la so nguyen to.\n", n);
    }
}

void ex4(){
    int n, chan = 0;
    printf("Nhap day so nguyen (nhap 0 de ket thuc): ");
    do {
        scanf("%d", &n);
        if(n % 2 == 0 && n != 0){
            chan++;
        }
    } while(n != 0);
    printf("So luong so chan la: %d\n", chan);
}

void ex5(){
    int a, b, c, d, number;
    printf("Nhap 4 so nguyen co 1 chu so: ");
    scanf("%1d%1d%1d%1d", &a, &b, &c, &d);
    number = a * 1000 + b * 100 + c * 10 + d;
    printf("Can bac 2 cua %d la %.2f\n", number, sqrt(number));
}


int main(){
    int n;
    printf("Chon bai tap (1-5): ");
    scanf("%d", &n);
    switch(n){
        case 1:
            ex1();
            break;
        case 2:
            ex2();
            break;
        case 3:
            ex3();
            break;
        case 4:
            ex4();
            break;
        case 5:
            ex5();
            break;
        case 7:
            ex6();
            break;
        default:
            printf("Lua chon khong hop le.\n");
    }
    return 0;
}