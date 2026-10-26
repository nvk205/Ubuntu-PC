// Bài 1. Viết chương trình nhập từ bàn phím n số nguyên dương nhỏ hơn 100, in ra màn hình hai cột song 
// song, một cột là các số, còn cột kia là tổng của các chữ số tương ứng ở cột thứ nhất. Tìm và in ra số có 
// tổng của các chữ số là lớn nhất, nếu có nhiều hơn một số như vậy thì in số đầu tiên.
#include <bits/stdc++.h>
using namespace std;

int tong(int n){
    int sum = 0;
    while (n != 0)
    {
        sum = sum + n%10;
        n = n/10;
    }
    return sum;
}

void nhap(int *a, int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Nhap a"<<i<<": ";
        cin>>a[i];
    }
}

void in(int *a, int n){
    int max;
    int val;
    cout<<setw(15)<<"Val"<<setw(15)<<"Tong"<<endl;
    max = tong(a[0]);
    for (int i = 0; i < n; i++)
    {
        if (max < tong(a[i]))
        {
            val = a[i];
            max = tong(a[i]);
        }
    }
    cout<<"--------------------------------------"<<endl;
    cout<<setw(15)<<val<<setw(15)<<max<<endl;    
    
}

int main(){
    int n;
    int a[100];
    cout<<"Nhap n: "; 
    cin>>n;
    nhap(a, n);
    in(a, n);
    return 0;
}