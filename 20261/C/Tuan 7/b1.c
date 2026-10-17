#include <stdio.h>
#include "header.h"

void hello(){
    printf("Hello\n");
}

int main(){
    int a = 5;
    int b = 10;
    printf("%d\n", tong(a, b));
    printf("%d %d\n", a, b);
    swap(&a, &b);
    printf("%d %d\n", a, b);
    hello();
    return 0;
}