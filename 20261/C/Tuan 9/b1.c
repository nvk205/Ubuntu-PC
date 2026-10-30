// Viết chương trình nhập vào một mảng động gồm n phần tử với n được nhập từ bàn phím (C và C++). Hiển thị chúng ra màn hình
#include <stdio.h>
#include <stdlib.h>

int main(){

    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    int *a = (int *) malloc (n* sizeof(int));

    printf("nhap mang: \n");
    for (int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    printf("In mang:\n");

    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    free(a);

    return 0;
}