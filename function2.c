#include <stdio.h>

void sayHi(void);
/*
関数を書く順序
プロトタイプ宣言 ↑
どんな関数が登場するかプログラムの最初に書く
*/

void sayHi(void)
{
    printf("hi!\n");
}

int main(void)
{
    sayHi();

    return 0;
}
