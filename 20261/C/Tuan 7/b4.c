#include <stdio.h>

void tinh(float a, float b){
    printf("Chon phep tinh:\n");
    printf("1. Cong\n");
    printf("2. Tru\n");
    printf("3. Nhan\n");
    printf("4. Chia\n");
    int n;
    printf("Nhap so: ");
    scanf("%d", &n);
    switch (n)
    {
    case 1:
        printf("%.2f", a + b);
        break;
    case 2:
        printf("%.2f", a + b);
        break;
    case 3:
        printf("%.2f", a + b);
        break;
    case 4:
        printf("%.2f", a + b);
        break;
    default:
        break;
    }
}

int main(){
    float a, b;
    printf("Nhap 2 so a va b: ");
    scanf("%f %f", &a, &b);
    tinh(a, b);
    return 0;
}