#include <stdio.h>

/*
変数variable…データにつけるラベル

データ型
int(整数) %d
float(実数) %f
char(１文字) %c
*/

int main(void) {

    /*
    int x;
    x = 10;
    */
    int x = 10;
    float y = 5.2;
    char c = 'A';

    printf("x= %d, y= %f, c= %c\n", x,y,c);
    return 0;
}