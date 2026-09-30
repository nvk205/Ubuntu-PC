#include <stdio.h>

int main(){
    char str[50];
    printf("Nhap sau ki tu: ");
    fgets(str, 50, stdin);
    printf("Hien thi: %s", str);
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c ", str[i]);
        i++;
    }
    
    return 0;
}