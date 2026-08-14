#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[5] = {1, 2, 3, 4, 5};
    printf("%d\n", a); //a la hang con tro
    printf("%d\n", &a[0]);

    for (int i = 0; i < 5; i++)
    {
        printf("Dia chi a[%d] = %d\n", i, &a[i]);
    }
    

    return 0;
}