#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int x = 1, y = 2;
    printf ("%d %d \n", x, y);
    swap (&x, &y);
    printf ("%d %d \n", x, y);
    return 0;
}