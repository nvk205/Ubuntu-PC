// 1. Viết hàm tìm giá trị của đa thức bậc n tại x (hệ số của đa thức là một mảng số thực). 
// Hàm có dạng double Polynom(double * heso, int n, double x)

#include <stdio.h>
#include <math.h>

double Polynom(double *heso, int n, double x) {
    double sum = 0;

    for (int i = 0; i <= n; i++) {
        sum += heso[i] * pow(x, i);
    }

    return sum;
}

int main(void){
    double a[100];
    int n;
    double x;

    printf("Nhap bac cua ham so: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("Nhap he so a[%d]: ", i);
        scanf("%lf", &a[i]);
    }

    printf("Tinh f(x) voi x = ");
    scanf("%lf", &x);

    double result = Polynom(a, n, x);
    printf("f(%lf) = %lf\n", x, result);

    return 0;
    
}