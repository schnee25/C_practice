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
    /* ↑条件判定が前 真じゃないと実行されない */

    int n = 0;
    do
    {
        printf("n: %d\n", n);
        n++;
    } while (n < 10);
    /* ↑条件判定が後 とりあえず一旦実行される */

    return 0;
}
