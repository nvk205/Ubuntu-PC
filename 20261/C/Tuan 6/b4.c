//1. Nhập một xâu ký tự từ bàn phím, hiển thị xâu đó ở dạng chữ hoa
//2. Tính S(n) = 1^2 + 2^2 +3^2  + ... + n^2 với n được nhập từ bàn phím. Hiển thị kết quả phép tính ra màn hình
//3. Viết chương trình tính tổng các giá trị lẻ nguyên dương nhỏ hơn N
//4. Viết chương trình xác định tính nguyên tố của N, N nhập từ bàn phím

#include <stdio.h>
#include <string.h>
#include <math.h>

void ex1(){
    char s[50];
    printf("Nhap chuoi: ");
    fgets(s, sizeof(s), stdin);
    int n = sizeof(s) / sizeof(char);
    for (int i = 0; i < n; i++)
    {
        if (s[i] >= 95){
            s[i] = s[i] - 'a' + 'A';
        }
    }
    printf("%s", s); 
}

void ex2(){
    int n;
    int sum = 0;
    printf("Nhap n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum = sum + (int)pow(i, 2);
    }
    printf("Tong S = %d", sum);
}

int main(){
    ex2();
    return 0;
}