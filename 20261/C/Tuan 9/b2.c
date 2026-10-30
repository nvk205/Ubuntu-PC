#include <stdio.h>
#include <stdlib.h>

void mangChan(int *a, int n, int **b){
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            count ++;
        }
    }
    *b = (int*) malloc(count * sizeof(int));
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            (*b)[++j] = a[i];
        }
    }
}

void nhap(int *x, int n){
    for (int i = 0; i < n; i++)
    {
        printf("Nhap x[%d]: ", i);
        scanf("%d", &x[i]);
    }
    
}
void in(int *x, int n){
    printf("Mang chan: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", x[i]);
    }
    
}

int main(){
    int a[5];
    int* b = NULL;
    nhap (a, 5);
    mangChan (a, 5, &b);
    int n = sizeof(b) / sizeof(int);
    in(b, n);
    free(b);
    return 0;
}