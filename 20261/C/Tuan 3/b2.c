#include <stdio.h>
#define N 10

int main(){
    int a[10];
    int *p = a;
    for (int i = 0; i < N; i++){
        scanf("%d", p + i);
    }

    for (int i = 0; i < N; i++){
        printf("%d ", *(p + i));
    }
    printf("\n");
// Tinh tong
    int sum = 0;
    for (int i = 0; i < N; i++){
        sum = sum + *(p + i);
    }
    printf("%d\n", sum);
    return 0;
}