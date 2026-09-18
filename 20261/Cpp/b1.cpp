#include <iostream>
using namespace std;

int giaithua(int n){
    if (n > 1)
    {
        return n * giaithua(n-1);
    }
    return 1;
}

int main(){

    char c;
    do
    {
        cout<<"Nhap gia tri cua n: ";
        int n;
        cin>>n;
        int kq = giaithua(n);
        cout<<"Gia tri giai thua cua " << n <<" = " << kq << endl;
        cout<<"Ban co muon tiep tuc? Y/N?";
        getchar();
        c = getchar();
    } while (c == 'y' || c == 'Y');
    return 0;
}