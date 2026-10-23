#include <stdio.h>

void func(int &n){
    n = 15;
}

int main(){
    int x = 5;
    func(x);
    printf("%d", x);

    return 0;
}