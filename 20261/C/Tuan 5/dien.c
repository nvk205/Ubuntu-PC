#include <stdio.h>

int main(){
    int a, b, n;
    int tien;
    
    char c;
    do
    {
        do{
            printf("Nhap so dien dau thang: ");
            scanf("%d", &a);
            printf("Nhap so dien cuoi thang: ");
            scanf("%d", &b);
            n = b - a;
            if (n < 0)
        {
            printf("Du lieu khong hop le! Vui long nhap lai!\n");
        }
        } while (n < 0);

        if (n < 100){
            tien = n * 1000;
        }
        else if (100 <= n < 200)
        {
            tien = 99 * 1000 + (n - 100) * 1500;
        }
        else if (200 <= n < 300)
        {
            tien = 99 * 1000 + 99 * 1500 + (n - 200) * 2000;
        }
        else {
            tien = 99 * 1000 + 99 * 1500 + 99 * 2000 + (n - 300) * 2500;
        }
        printf("So tien phai tra: %d\n", tien);

        getchar();
        printf("Ban co muon tiep tuc tinh (y/n):");
        c = getchar();
        
    } while (c == 'y' || c == 'Y');

    
    return 0;
}