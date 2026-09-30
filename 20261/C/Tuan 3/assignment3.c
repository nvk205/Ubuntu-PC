/*
 * assignment3.c
Viết chương trình (main) thực hiện các nhiệm vụ sau:
1. Nhập vào một chuỗi ký tự (mảng)
2. Đếm số từ trong chuỗi (cách nhau bằng khoảng trắng)
3. Kiểm tra chuỗi đó có đối xứng không (vd chuỗi đối xứng: madam)
Hiển thị chuỗi theo chiều ngược lại
4. Thực hiện lại bài trên, dùng con trỏ để truy nhập chuỗi
 */

#include <stdio.h>
#include <string.h>

void nhapChuoi(char *s, int n)
{
    printf("Nhap chuoi (toi da %d ky tu): ", n - 1);
    fgets(s, n, stdin);
    s[strcspn(s, "\n")] = '\0'; // Loai bo ky tu xuong dong
}

void demTu(char *s)
{
    int count = 0;
    char *token = strtok(s, " ");
    while (token != NULL)
    {
        count++;
        token = strtok(NULL, " ");
    }
    printf("So tu trong chuoi: %d\n", count);
}

void kiemTraDoiXung(char *s)
{
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++)
    {
        if (s[i] != s[len - i - 1])
        {
            printf("Chuoi khong doi xung.\n");
            return;
        }
    }
    printf("Chuoi doi xung.\n");
}

void inNguoc(char *s)
{
    int len = strlen(s);
    printf("Chuoi theo chieu nguoc: ");
    for (int i = len - 1; i >= 0; i--)
    {
        putchar(s[i]);
    }
    printf("\n");
}

int main()
{
    char chuoi[100];
    nhapChuoi(chuoi, sizeof(chuoi));
    demTu(chuoi);
    kiemTraDoiXung(chuoi);
    inNguoc(chuoi);
    return 0;
}
