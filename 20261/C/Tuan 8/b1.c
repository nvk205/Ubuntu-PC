#include <stdio.h>

void max_addr(int a[], int n) {
    if (n <= 0) {
        printf("Mang khong hop le.\n");
        return;
    }

    int *max = &a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > *max) {
            max = &a[i];
        }
    }

    int index = max - a; 

    printf("Gia tri lon nhat: %d\n", *max);
    printf("Chi so (index): %d\n", index);
    printf("Dia chi bo nho: %p\n", (void*)max);
}

void nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
}

int main() {
    int a[10];
    int n;

    printf("Nhap so luong phan tu (1 - 10): ");
    if (scanf("%d", &n) != 1 || n < 1 || n > 10) {
        printf("So luong phan tu khong hop le!\n");
        return 1;
    }

    printf("Nhap %d phan tu:\n", n);
    nhap(a, n);

    max_addr(a, n);

    return 0;
}