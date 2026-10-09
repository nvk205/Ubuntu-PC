#include <stdio.h>

int main(){

    char c;
    printf("Enter 'y' or 'n': ");
    scanf("%c", &c);
    switch (c)
    {
    case 'y':
        printf("YES\n");
        break;
    
    case 'n':
        printf("NO\n");
        break;
        
    default:
        printf("hihi\n");
        break;
    }
    return 0;
}