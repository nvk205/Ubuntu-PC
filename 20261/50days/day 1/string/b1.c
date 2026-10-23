/*
Một hệ checksum đơn giản dùng quy tắc: cho chuỗi s (đánh chỉ số từ 1), hãy tính tổng giá trị ASCII của các ký tự đứng ở vị trí lẻ (1, 3, 5, ...).

Ví dụ s = "abcd": vị trí 1 = 'a'(97), vị trí 3 = 'c'(99) → tổng = 196.
*/
#include <stdio.h>
#include <string.h>

int main(void){
    char s[1024];
    if(!fgets(s,sizeof(s),stdin)) return 0;
    int n=(int)strlen(s);
    if(n>0 && s[n-1]=='\n') s[--n]='\0';
    long long sum=0;
    for (int i; i < n; i++){
        if (i % 2 == 0){
            sum = sum + s[i];
        }
    }
    printf("%lld\n", sum);
    return 0;
}