#include <stdio.h>

int main(){
    enum Color {Red = 5, Green, Blue};
    enum WeekDay {Mon = 2, Tue, Wed, Thu, Fri, Sat, Sun = 1};
    int n = Red;
    printf("%d \n", n);
    n = Green;
    printf("%d \n", n);
    return 0;
}