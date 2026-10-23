#include <stdio.h>

#include <iostream>

using namespace std;

int timMax1(int *p, int n, int &vitri) {
    int maxVal = p[0];
    vitri = 0;
    for (int i = 1; i < n; i++) {
        if (p[i] > maxVal) {
            maxVal = p[i];
            vitri = i;
        }
    }
    return maxVal;
}

int timMax2(int *p, int n, int *vitri) {
    int maxVal = p[0];
    *vitri = 0; 
    for (int i = 1; i < n; i++) {
        if (p[i] > maxVal) {
            maxVal = p[i];
            *vitri = i;
        }
    }
    return maxVal;
}


void timMax3(int *p, int n, int &max, int &vitri) {
    max = p[0];
    vitri = 0;
    for (int i = 1; i < n; i++) {
        if (p[i] > max) {
            max = p[i];
            vitri = i;
        }
    }
}


void timMax4(int *p, int n, int *max, int *vitri) {
    *max = p[0];
    *vitri = 0;
    for (int i = 1; i < n; i++) {
        if (p[i] > *max) {
            *max = p[i];
            *vitri = i;
        }
    }
}

int main() {
    int a[] = {12, 45, 7, 89, 23, 64};
    int n = sizeof(a) / sizeof(a[0]);

    cout << "Mang ban dau: ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";

    int vt;
    int maxVal = timMax1(a, n, vt);
    cout << "Max: " << maxVal << " | Vi tri: " << vt << " | Dia chi: " << (void*)(a + vt) << "\n";

    
    int vt;
    int maxVal = timMax2(a, n, &vt);
    cout << "Max: " << maxVal << " | Vi tri: " << vt << " | Dia chi: " << (void*)(a + vt) << "\n";

    int maxVal, vt;
    timMax3(a, n, maxVal, vt); 
    cout << "Max: " << maxVal << " | Vi tri: " << vt << " | Dia chi: " << (void*)(a + vt) << "\n";
    
    int maxVal, vt;
    timMax4(a, n, &maxVal, &vt);
    cout << "Max: " << maxVal << " | Vi tri: " << vt << " | Dia chi: " << (void*)(a + vt) << "\n";

    return 0;
}