#include <stdio.h>
#include <limits.h>
#include <float.h>
//B1. In ra sizeof cua char, short, int, long, long long, float, double, long double dung dac ta %zu
void ex_1(){
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

//B2. Dung <limit.h> <float.h> in ra cac gioi han kieu du lieu
void ex_2(){
    printf("Bai 2. \n");
    printf("CHAR_BIT = %d\n", CHAR_BIT);
    printf("INT_MIN = %d\n", INT_MIN);
    printf("INT_MAX = %d\n", INT_MAX);
    printf("UNIT_MAX = %u\n", UINT_MAX);
    printf("LLONG_MAX = %lld\n", LLONG_MAX);
    printf("FLT_EPSILON = %e\n", FLT_EPSILON);
    printf("DBL_EPSILON = %e\n", DBL_EPSILON );
}

//B3. Nhap so nguyen khong am va in ra duoi dang %d, %o, %x, %X, , %#x, %#o
void ex_3(){
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

//B4. Tran so

void ex_4(){
    printf("Bai 4.\n");
    
    unsigned char a = 250; //8 bit se co gia tri tu 0 - 255
    a = a + 10; //Tran so nen a = 260 % 256 = 4
    printf("a = %d\n", a); 

    unsigned int b = 0; 
    b = b - 1; // do bi am nen quay nguoc ve lay so lon nhat trong unsigned int
    printf("b = %u\n", b); 

    signed char c = 200; //8bit co gia tri -128 - 127
    printf("c = %d\n", c); // 200(10) = 11001000(2) la ma bu 2
    // 11001000 => 00110111 => 00111000 = 56(10)
    printf("\n");
}
//B5. Viet doan code dac ta cho so thuc

void ex_5(){
    printf("%.20f\n", 0.1 + 0.2); 
    printf("%d\n", 0.1 + 0.2 == 0.3); 
    float f = 16777217; 
    printf("%.1f\n", f); 
    float g = 0.1f; 
    printf("%.20f\n", g); 
    double h = 0.1; 
    printf("%.20f\n", h); 
}

//B6. 

int main(){
    ex_5();
    return 0;
}