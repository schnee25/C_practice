#include <stdio.h>

/*
continue; 一回スキップ
break; ループを抜ける
*/
int main(void)
{
    int m;
    for (m = 0; m < 10; m++)
    {
        if (m == 3) /* m=3の時はスキップ */
        {
            continue;
        }
        if (m == 8)
        {
            break; /* 8の時からはループから抜ける */
        }

        printf("m: %d\n", m);
    }
}
