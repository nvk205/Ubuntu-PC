#include <stdio.h>
#include <string.h>

typedef struct
{
    int d, m, y;
}Date;
enum trangThai{Nam_1, Nam_2, Nam_3, Nam_4};
typedef struct
{
    int mssv;
    char hoTen[50];
    Date ntns;
    float CPA;
}SinhVien;

SinhVien nhap(SinhVien x){
    printf("Mssv: ");
    scanf("%d", &x.mssv);
    printf("Nhap ho ten: ");
    getchar();
    fgets(x.hoTen, sizeof(x.hoTen), stdin);
    x.hoTen[strcspn(x.hoTen, "\n")] = '\0';
    printf("Nhap ngay than nam sinh: (dd mm yyyy)");
    scanf("%d", &x.ntns.d);
    scanf("%d", &x.ntns.m);
    scanf("%d", &x.ntns.y);
    printf("Nhap CPA: ");
    scanf("%f", &x.CPA);
    return x;
};

void in(SinhVien x){printf("%d", x.mssv);
    printf("Mssv: %d; ", x.mssv);
    printf("Ho ten: %s; ", x.hoTen);
    printf("Ngay sinh: %d - %d - %d; ",x.ntns.d, x.ntns.m, x.ntns.y);
    printf("CPA: %.2f\n", x.CPA);
}

int main(){
    SinhVien x = {20233465, "Nguyen Van Khanh", {21, 04, 2005}, 3};
    SinhVien y;
    y = nhap(y);
    in(y);
    return 0;
}