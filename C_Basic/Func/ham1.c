#include <stdio.h>
#include <stdlib.h>

char hovaten[30];
int tuoi;

void nhapthongtincanhan(){
    printf("Nhap ten: ");
    fgets(hovaten, sizeof(hovaten), stdin);
    printf("Nhap tuoi: ");
    scanf("%d", &tuoi);
}

void inthongtin(){
    printf("*******\n");
    printf("Ten: %s\n", hovaten);
    printf("Tuoi: %d\n", tuoi);
}

int main(){

    nhapthongtincanhan();
    inthongtin();

    return 0;
}