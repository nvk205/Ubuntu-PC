#include <iostream>
#include <string.h>
#include <cctype>

using namespace std;

int demTanSuat(const string &xau, char ky_tu) {
    int count = 0;

    for (char c : xau) {
        if (c == ky_tu) {
            count++;
        }
    }
    return count;
}

string chuyenChuHoa(string xau) {
    for (char &c : xau) {
        c = toupper(c);
    }
    return xau;
}

int main(){
    string s = "nguyen van khanh";
    
    cout << "Tan suat chu 'n': " << demTanSuat(s, 'n') << endl;
    cout << "Chu hoa: " << chuyenChuHoa(s) << endl;
    
    return 0;
    return 0;
}