#include <stdio.h>

int giaithua(int n){
    if (n > 1)
    {
        return n * giaithua(n-1);
    }
    return 1;
}

int main(){
    char c;
    do
    {
        printf("Nhap gia tri cua n: ");
        int n;
        scanf ("%d", &n);
        printf("Gia tri giai thua cua %d = %d\n", n, giaithua(n));
        printf("Ban co muon tiep tuc? Y/N?");
        // scanf("%c", &c);
        getchar();
        c = getchar();
    } while (c == 'y' || c == 'Y');
    return 0;
}