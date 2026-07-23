//ham tinh tong 3 so
#include <stdio.h>

void sum3num(int x, int y, int z){
    int sum;
    sum = x + y + z;
    printf("Tong 3 so: %d + %d + %d = %d\n", x, y, z, sum);
}

int main(){
    sum3num(3, 4, 5);
    sum3num(3, 4, 6);

    return 0;
}