/*Nhap nam sinh va tinh tuoi */
#include <stdio.h>

int main(){
    int namSinh, tuoi;
    printf("Nhap nam sinh: ");
    scanf("%d", &namSinh);
    tuoi = 2026 - namSinh;
    printf("Tuoi cua ban la: %d\n", tuoi);
    return 0;
}