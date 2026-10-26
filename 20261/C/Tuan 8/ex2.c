// 2. Xây dựng cấu trúc Complex để đại diện cho một số phức với thành phần thực và ảo đều là số thực. Yêu cầu:  
// - Hãy viết các hàm tính tổng, hiệu, tích của hai số phức
// - Viết một hàm tính đồng thời tổng và hiệu của hai số phức.
// - Viết hàm hiển thị một số phức theo đúng định dạng (a+bj với a là thành phần thực, b là thành phần ảo)
// - Viết chương trình chính sử dụng các hàm trên.

#include <stdio.h>

typedef struct
{
    float re;
    float im;
}Complex;

Complex Sum(Complex a, Complex b){
    Complex result;
    result.re = a.re + b.re;
    result.im = a.im + b.im;
    return result;
}

Complex Sub(Complex a, Complex b){
    Complex result;
    result.re = a.re - b.re;
    result.im = a.im - b.im;
    return result;
}

Complex Mul(Complex a, Complex b){
    Complex result;
    result.re = a.re * b.re - a.im * b.im;
    result.im = a.re * b.im + b.re * a.im;
    return result;
}

Complex Nhap(){
    Complex a;
    printf("Nhap phan thuc: ");
    scanf("%f", &a.re);
    printf("Nhap phan ao: ");
    scanf("%f", &a.im);
    return a;
}

void Print(Complex a){
    printf("Result = %.2f + j%.2f\n", a.re, a.im);
}

void Sum_Sub(Complex a, Complex b){
    Complex result_1;
    result_1.re = a.re + b.re;
    result_1.im = a.im + b.im;
    Print(result_1);

    Complex result_2;
    result_2.re = a.re - b.re;
    result_2.im = a.im - b.im;
    Print(result_2);
}

int main(void){
    Complex a = Nhap();
    Complex b = Nhap();
    Complex result_sum = Sum(a, b);
    Complex result_sub = Sub(a, b);
    Complex result_mul = Mul(a, b);
    printf("Tong hai so phuc: ");
    Print(result_sum);
    printf("Hieu hai so phuc: ");
    Print(result_sub);
    printf("Tich hai so phuc: ");
    Print(result_mul);
    printf("Tong va hieu hai so phuc: ");
    Sum_Sub(a, b);

    return 0;
}