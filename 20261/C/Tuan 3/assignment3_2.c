#include <stdio.h>
#include <string.h>

void nhapChuoi(char *s, int n)
{
    printf("Nhap chuoi (toi da %d ky tu): ", n - 1);
    fgets(s, n, stdin);
    // Loai bo ky tu '\n'
    char *p = strchr(s, '\n');
    if (p != NULL)
        *p = '\0';
}

void demTu(char *s)
{
    int count = 0;
    int trongTu = 0;
    char *p = s;
    while (*p != '\0')
    {
        if (*p != ' ' && trongTu == 0)
        {
            count++;
            trongTu = 1;
        }
        else if (*p == ' ')
        {
            trongTu = 0;
        }
        p++;
    }

    printf("So tu trong chuoi: %d\n", count);
}

void kiemTraDoiXung(char *s)
{
    char *dau = s;
    char *cuoi = s + strlen(s) - 1;
    while (dau < cuoi)
    {
        if (*dau != *cuoi)
        {
            printf("Chuoi khong doi xung.\n");
            return;
        }
        dau++;
        cuoi--;
    }
    printf("Chuoi doi xung.\n");
}

void inNguoc(char *s)
{
    char *cuoi = s + strlen(s) - 1;
    printf("Chuoi theo chieu nguoc: ");
    while (cuoi >= s)
    {
        putchar(*cuoi);
        cuoi--;
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