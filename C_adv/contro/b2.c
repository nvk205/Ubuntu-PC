#include <stdio.h>
#include <stdlib.h>

void tang1(int a){
    a++;
}

void tang2(int *a){
    *a += 1;
}

int main(){
    int a = 300;
    tang1 (a);
    printf ("%d \n", a);
    tang2(&a);
    printf ("%d \n", a);
    
    return 0;
}