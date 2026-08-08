#include <stdio.h>
#include <string.h>

int main()
{
    //khai bao con tro
    char *ten = "depzai"; //vùng nhớ hằng thì không ghi đè được
    printf("%s\n", ten);
    char name[] = "khanh"; 
    int res = strcmp(ten, name);
    if (res > 0)
    {
        printf("1\n");
    }
    else if (res == 0)
    {
        printf("0\n");
    }
    else
    {
        printf("-1\n");
    }

    printf("%s\n", name);
    strcpy(&name[4], ten); // dich, nguon - chuoi dich không được là vùng nhớ hằng
    printf("%s\n", name);
    return 0;
}