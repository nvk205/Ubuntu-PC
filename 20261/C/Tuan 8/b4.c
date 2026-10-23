#include <stdio.h>
#include <string.h>

typedef struct
{
    long mssv;
    char hoTen[50];
    char  queQuan[50];
    float CPA;
} SinhVien;

SinhVien nhap(SinhVien x){
    printf("Mssv: ");
    scanf("%ld", &x.mssv);
    getchar();
    printf("Ho va ten: ");
    fgets(x.hoTen, sizeof(x.hoTen), stdin);
    x.hoTen[strcspn(x.hoTen, "\n")] = '\0';
    printf("Que quan: ");
    fgets(x.queQuan, sizeof(x.queQuan), stdin);
    x.queQuan[strcspn(x.queQuan, "\n")] = '\0';
    printf("CPA: ");
    scanf("%f", &x.CPA);
    return x;
}

void nhapDS (SinhVien a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Nhap thong tin sinh vien thu %d: \n", i + 1);
        a[i] = nhap(a[i]);
    }
}

void in(SinhVien x){
    printf("Mssv: %ld; ", x.mssv);
    printf("Ten: %s; ", x.hoTen);
    printf("Que quan: %s; ", x.queQuan);
    printf("CPA: %.2f;\n", x.CPA);
}

void inDS(SinhVien a[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("STT %d \n", i + 1);
        in(a[i]);
    }
    
}

float CPA_TB(SinhVien a[], int n){
    float TB = 0;
    for (int i = 0; i < n; i++)
    {
        TB += a[i].CPA;
    }
    return TB / n;
}

SinhVien Max_CPA(SinhVien a[], int n){
    SinhVien max = a[0];
    for (int i = 1; i < n; i++)
    {
        if (max.CPA < a[i].CPA)
        {
            max = a[i];
        }
    }
    return max;
}

int main(){
    
    SinhVien a[100];
    int n;
    printf("Nhap so luong sinh vien : ");
    scanf("%d", &n);
    getchar();
    nhapDS(a, n);
    inDS(a, n);
    printf("CPA trung binh: %.2f\n", CPA_TB(a, n));
    printf("Sien vien CPA cao nhat: ");
    in(Max_CPA(a, n));
    return 0;

}