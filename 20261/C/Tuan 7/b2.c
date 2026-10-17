#include <stdio.h>

void tang(int a[], int n){
    int x;
    printf("Nhap gia tri muon tang them: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        a[i] = a[i] + n;
    }
}

int main(){
    int n;
    int a[20];
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("Nhap gia tri a[%i]:", i);
        scanf("%d", &a[i]);
    }
    tang(a, n);
    printf("In mang sau khi tang gia tri: \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    return 0;
}