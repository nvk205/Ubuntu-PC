#include <stdio.h>
#include <stdlib.h>

int main(){
    int a = 300;
    int *ptr;
    if (ptr == NULL){}
    {
        printf("con tro NULL\n");
    }
    ptr = &a; //gan dia chi cho ptr
    printf("con tri con tro %d", *ptr);
    
    return 0;
}