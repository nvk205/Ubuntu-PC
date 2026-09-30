//Khai báo 4 biến int, float, double, char
//Khai báo 4 con trỏ mang địa chỉ của 4 biến này
//Hiển thị địa chỉ của 4 biến,
//Hiển thị giá trị của con trỏ
#include <stdio.h>

int main(){
    //khai bao 4 bien
    int a = 1;
    float b = 2.0;
    double c = 100;
    char d = 'c';
    printf("%d %d %d %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof (d));
    //khai bao 4 con tro 
    int *add_1 = &a;
    float *add_2 = &b;
    double *add_3 = &c;
    char *add_4 = &d;
    //Dia chi cua 4 bien
    printf ("Dia chi cua a la: %d\n", &a);
    printf ("Dia chi cua b la: %d\n", &b);
    printf ("Dia chi cua c la: %d\n", &c);
    printf ("Dia chi cua d la: %d\n", &d);
    //Gia tri cua con tro
    printf ("Gia tri cua a la: %d\n", *add_1);
    printf ("Gia tri cua b la: %f\n", *add_2);
    printf ("Gia tri cua c la: %lf\n", *add_3);
    printf ("Gia tri cua d la: %c\n", *add_4);
    return 0;
}