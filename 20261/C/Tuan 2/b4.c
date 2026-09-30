#include <stdio.h>

int main(){
    int sum = 0;
    const int N = 100;
    int a[N];
    int n;
    int max;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu a[%d]: ", i);
        scanf("%d", &a[i]);
    }
    max = a[0];
    printf ("Cac so chan trong mang: ");
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max){
            max = a[i];
        }
        sum = sum + a[i];
        if (a[i] % 2 == 0)
        {
            printf("%d ", a[i]);
        }
        
    }
    printf("\nTong cac phan tu: %d\n", sum);
    printf("Max cua mang: %d\n", max);
    printf("Kich thuoc mang a: %ld\n", sizeof(a));
    return 0;
}