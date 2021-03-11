#include <stdio.h>
/*
変数の有効範囲
*/

/* int a = 0; グローバル変数　あんまり推奨されていない*/

void f(void)
{
    int a = 0; /*ローカル変数*/
    a++;
    printf("a:%d\n", a);
    /*式や変数が複数ある場合は
    カンマ「,」で区切って、「式や変数」を続ける*/
}
int main(void)
{
    f();
    return 0;
}