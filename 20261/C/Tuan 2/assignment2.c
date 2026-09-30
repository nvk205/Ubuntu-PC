#include <stdio.h>
#include <limits.h>
#include <float.h>
// B1. In ra sizeof cua char, short, int, long, long long, float, double, long double dung dac ta %zu
void ex_1()
{
    char c;
    short sh;
    int z;
    long l;
    long long ll;
    float f;
    double db;
    long double ldb;
    printf("Bai 1. \n");
    printf("Size of char: %zu \n", sizeof(c));
    printf("Size of short: %zu \n", sizeof(sh));
    printf("Size of int: %zu \n", sizeof(z));
    printf("Size of long: %zu \n", sizeof(l));
    printf("Size of long long: %zu \n", sizeof(ll));
    printf("Size of float: %zu \n", sizeof(f));
    printf("Size of double: %zu \n", sizeof(db));
    printf("Size of long double: %zu \n", sizeof(ldb));
}

// B2. Dung <limit.h> <float.h> in ra cac gioi han kieu du lieu
void ex_2()
{
    printf("Bai 2. \n");
    printf("CHAR_BIT = %d\n", CHAR_BIT);
    printf("INT_MIN = %d\n", INT_MIN);
    printf("INT_MAX = %d\n", INT_MAX);
    printf("UNIT_MAX = %u\n", UINT_MAX);
    printf("LLONG_MAX = %lld\n", LLONG_MAX);
    printf("FLT_EPSILON = %e\n", FLT_EPSILON);
    printf("DBL_EPSILON = %e\n", DBL_EPSILON);
}

// B3. Nhap so nguyen khong am va in ra duoi dang %d, %o, %x, %X, , %#x, %#o
void ex_3()
{
    unsigned int n;
    printf("Bai 3. \n");
    printf("Nhap mot so nguyen khong am: ");
    scanf("%u", &n);
    printf("Thap phan (%%d): %d\n", n);
    printf("Bat phan (%%o): %o\n", n);
    printf("Thap luc phan thuong (%%x): %x\n", n);
    printf("Thap luc phan hoa (%%X): %X\n", n);
    printf("Thap luc phan co tien to (%%#x): %#x\n", n);
    printf("Bat phan co tien to (%%#o): %#o\n", n);
    printf("\n");
}

// B4. Tran so

void ex_4()
{
    printf("Bai 4.\n");

    unsigned char a = 250; // 8 bit se co gia tri tu 0 - 255
    a = a + 10;            // Tran so nen a = 260 % 256 = 4
    printf("a = %d\n", a);

    unsigned int b = 0;
    b = b - 1; // do bi am nen quay nguoc ve lay so lon nhat trong unsigned int
    printf("b = %u\n", b);

    signed char c = 200;   // 8bit co gia tri -128 - 127
    printf("c = %d\n", c); // 200(10) = 11001000(2) la ma bu 2
    // 11001000 => 00110111 => 00111000 = 56(10)
    printf("\n");
}
// B5. Viet doan code dac ta cho so thuc

void ex_5()
{
    printf("Bai 5.\n");
    printf("%.20f\n", 0.1 + 0.2);
    printf("%d\n", 0.1 + 0.2 == 0.3);
    float f = 16777217;
    printf("%.1f\n", f);
    float g = 0.1f;
    printf("%.20f\n", g);
    double h = 0.1;
    printf("%.20f\n", h);
}

// B6. In ra ket qua cua phep tinh va giai thich ket qua
void ex_6()
{
    printf("Bai 6.\n");
    printf("100 * 9 / 5 + 32 = %d\n", 100 * 9 / 5 + 32);       // 100 * 9 = 900, 900 / 5 = 180, 180 + 32 = 212
    printf("100 * (9 / 5) + 32 = %d\n", 100 * (9 / 5) + 32);   // 9 / 5 = 1, 100 * 1 = 100, 100 + 32 = 132
    printf("100 * 9.0 / 5 + 32 = %.1f\n", 100 * 9.0 / 5 + 32); // 100 * 9.0 = 900.0, 900.0 / 5 = 180.0, 180.0 + 32 = 212.0
}

// B7. Viết chương trình thực hiện các yêu cầu sau:
// Nhập một ký tự, in ra mã ASCII thập phân và thập lục phân.
// Nhập một số từ 32 đến 126, in ra ký tự tương ứng.
// Nhập một chữ cái thường, in ra chữ hoa tương ứng chỉ bằng phép trừ (c - 'a' + 'A').
// Nhập một ký tự chữ số, ví dụ '7', in ra giá trị số 7 (c - '0').

void ex_7()
{
    char ch;
    printf("Bai 7.\n");
    printf("Nhap mot ky tu: ");
    scanf(" %c", &ch);
    printf("Ma ASCII thap phan: %d\n", ch);
    printf("Ma ASCII thap luc phan: %x\n", ch);

    int num;
    printf("Nhap mot so tu 32 den 126: ");
    scanf("%d", &num);
    if (num >= 32 && num <= 126)
    {
        printf("Ky tu tuong ung: %c\n", num);
    }
    else
    {
        printf("So khong hop le.\n");
    }

    char lower;
    printf("Nhap mot chu cai thuong: ");
    scanf(" %c", &lower);
    if (lower >= 'a' && lower <= 'z')
    {
        char upper = lower - 'a' + 'A';
        printf("Chu hoa tuong ung: %c\n", upper);
    }
    else
    {
        printf("Ky tu khong phai chu cai thuong.\n");
    }

    char digit;
    printf("Nhap mot ky tu chu so (0-9): ");
    scanf(" %c", &digit);
    if (digit >= '0' && digit <= '9')
    {
        int value = digit - '0';
        printf("Gia tri so tuong ung: %d\n", value);
    }
    else
    {
        printf("Ky tu khong phai chu so.\n");
    }
}

// B8. Nhập một số nguyên dương có đúng 4 chữ số. In ra: từng chữ số hàng nghìn, trăm, chục, đơn vị; tổng các chữ số; số đảo ngược.
void ex_8()
{
    int num;
    printf("Bai 8.\n");
    printf("Nhap so nguyen duong co dung 4 chu so: ");
    scanf("%d", &num);
    if (num >= 1000 && num <= 9999)
    {
        int a = num / 1000;
        int b = (num / 100) % 10;
        int c = (num / 10) % 10;
        int d = num % 10;

        printf("Hang nghin: %d\n", a);
        printf("Hang tram: %d\n", b);
        printf("Hang chuc: %d\n", c);
        printf("Hang don vi: %d\n", d);

        int sum = a + b + c + d;
        printf("Tong cac chu so: %d\n", sum);

        int reversed = d * 1000 + c * 100 + b * 10 + a;
        printf("So dao nguoc: %d\n", reversed);
    }
    else
    {
        printf("So khong hop le.\n");
    }
}

// B9. Nhập một số giây, in ra dạng ngày giờ:phút:giây, giờ phút giây luôn đủ 2 chữ số.
void ex_9()
{
    int s;
    printf("Bai 9.\n");
    printf("Nhap so giay: ");
    scanf("%d", &s);

    int ngay = s / 86400;
    int gio = (s % 86400) / 3600;
    int phut = (s % 3600) / 60;
    int giay = s % 60;

    printf("%02d:%02d:%02d:%02d\n", ngay, gio, phut, giay);
}

// B10. Nhập số tiền (bội số của 1 000 đồng). Tính số tờ ít nhất cần dùng với các mệnh giá 500 000, 200 000, 100 000, 50 000, 20 000, 10 000, 5 000, 2 000, 1 000
void ex_10()
{
    int tien;
    printf("Bai 10.\n");
    printf("Nhap so tien (boi so cua 1000): ");
    scanf("%d", &tien);

    if (tien % 1000 != 0)
    {
        printf("So tien khong hop le.\n");
        return;
    }

    int to[] = {500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000};
    int count[9] = {0};

    for (int i = 0; i < 9; i++)
    {
        count[i] = tien / to[i];
        tien %= to[i];
    }

    printf("So to can dung:\n");
    for (int i = 0; i < 9; i++)
    {
        if (count[i] > 0)
        {
            printf("%d to %d\n", count[i], to[i]);
        }
    }
}
int main()
{
    int bai;
    printf("Nhap bai muon chay (1-10): \n");
    printf("1. In ra sizeof cua cac kieu du lieu.\n");
    printf("2. In ra cac gioi han kieu du lieu.\n");
    printf("3. Nhap so nguyen khong am va in ra duoi dang %d, %o, %x, %X, %#x, %#o.\n");
    printf("4. Tran so.\n");
    printf("5. Viet doan code dac ta cho so thuc.\n");
    printf("6. In ra ket qua cua phep tinh va giai thich ket qua.\n");
    printf("7. Nhap mot ky tu, in ra ma ASCII thap phan va thap luc phan. Nhap mot so tu 32 den 126, in ra ky tu tuong ung. Nhap mot chu cai thuong, in ra chu hoa tuong ung chi bang phep tru. Nhap mot ky tu chu so, in ra gia tri so tuong ung.\n");
    printf("8. Nhap mot so nguyen duong co dung 4 chu so. In ra tung chu so hang nghin, tram, chuc, don vi; tong cac chu so; so dao nguoc.\n");
    printf("9. Nhap mot so giay, in ra dang ngay gio:phut:giay, gio phut giay luon du 2 chu so.\n");
    printf("10. Nhap so tien (boi so cua 1000). Tinh so to it nhat can dung voi cac menh gia 500000, 200000, 100000, 50000, 20000, 10000, 5000, 2000, 1000.\n");
    scanf("%d", &bai);
    switch (bai)
    {
    case 1:
        ex_1();
        break;
    case 2:
        ex_2();
        break;
    case 3:
        ex_3();
        break;
    case 4:
        ex_4();
        break;
    case 5:
        ex_5();
        break;
    case 6:
        ex_6();
        break;
    case 7:
        ex_7();
        break;
    case 8:
        ex_8();
        break;
    case 9:
        ex_9();
        break;
    case 10:
        ex_10();
        break;
    default:
        printf("Bai khong hop le.\n");
    }
    return 0;
}