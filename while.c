#include <stdio.h>

/*
ループ(while)
*/
int main(void)
{
    int m = 0;
    while (m < 10)
    {
        printf("m: %d\n", m);
        /*　%dはint(整数)のデータ型 */
        m++;
    }
    return 0;
}
