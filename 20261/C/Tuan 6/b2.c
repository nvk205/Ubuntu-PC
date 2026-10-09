#include <stdio.h>

int main(){
    int n;
    do
    {
        printf("Hay nhap so dien: ");
        scanf("%d", &n);
        if (n < 0)
        {
            printf("So dien khong thoa man! Vui long nhap lai!\n");
        }
        else
        {
            printf("Nhap thanh cong!\n");
        }
        
        
    } while (n < 0);
    
    return 0;
}