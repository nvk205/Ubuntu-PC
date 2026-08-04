#include <stdio.h>

void giamgiatri(int *var){
    *var = *var -1;
    //var: dia chi x
    //*var: gia tri cua dia chi
}

int main(){
    int x = 100;
    giamgiatri(&x);
    printf("%d", x);
    return 0;
}