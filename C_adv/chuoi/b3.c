#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main(){
    char a[100];
    scanf ("%s", &a); //khong nhan space va ghi thua them phim enter
    printf("%s\n", a);
    getchar(); // doc 1 phim cua scanf o tren de tranh enter
    char x[100];
    gets(x);
    printf("%s", x);
    return 0;
}