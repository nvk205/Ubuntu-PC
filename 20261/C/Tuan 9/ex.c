// 1. Viết một hàm đảo ngược một mảng. Viết chương trình chính sử dụng hàm đó
// 2. Viết một hàm lưu các phần tử của một mảng theo chiều ngược lại ra một mảng khác. 
//    Viết chương trình chính sử dụng hàm đó.

#include <stdio.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ex_1(int *a, int n){
    for (int i = 0; i < n/2; i++)
    {
        swap(&a[i], &a[n - 1 - i]);
    }   
}

void ex_2(int *a, int *b, int n){
    for (int i = 0; i < n; i++)
    {
        b[i] = a[n - 1 - i];
    }
}

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    int b[5];

    ex_1(a, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    ex_2(a, b, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", b[i]);
    }
    printf("\n");
    return 0;
}
