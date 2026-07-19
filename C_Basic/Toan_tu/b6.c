// Nhap ten san pham, gia san pham va so luong san pham, tinh tong tien phai tra
#include <stdio.h>
int main(){
    char tenSanPham[50];
    float giaSanPham;
    int soLuongSanPham;
    float tongTien;
    printf("Nhap ten san pham: ");
    scanf("%s", tenSanPham);
    printf("Nhap gia san pham: ");
    scanf("%f", &giaSanPham);
    printf("Nhap so luong san pham: ");
    scanf("%d", &soLuongSanPham);
    tongTien = giaSanPham * soLuongSanPham;
    printf("Tong tien phai tra cho san pham %s la: %.2f\n", tenSanPham, tongTien);
    return 0;
}