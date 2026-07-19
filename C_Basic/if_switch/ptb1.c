//giai phuong trinh bac nhat ax + b = 0
#include <stdio.h>

int main(){
    int a, b;
    printf("Nhap gia tri a: ");
    scanf ("%d", &a);
    printf("Nhap gia tri b: ");
    scanf ("%d", &b);
    if (a == 0 & b == 0)
    {
        printf("Phuong trinh co vo so nghiem");
    }
    else if (a == 0 && b != 0)
    {
        printf("Phuong trinh vo nghiem");
    }
    else{
        printf("Phuong trinh co nghiem x = %.2f \n", -(float)b / a);
    }
    
    
    return 0;
}