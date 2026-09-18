#include <iostream>
using namespace std;

int main(){
    enum Color {Red, Green, Blue};
    enum WeekDay {Mon = 2, Tue, Wed, Thu, Fri, Sat, Sun = 1};
    int n = Red;
    printf("%d", n);
    return 0;
}