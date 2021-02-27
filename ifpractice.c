#include <stdio.h>

/*
条件分岐(if)
>= 以上
<= 以下
== 等しい
!= 等しくない
*/

int main(void){
    int score = 55;
    if (score >= 60)
    {
        printf("OK!\n");
    } else if (score >=50){
        printf("so so...\n");
    } else {
        printf("NG!\n");
    }
    return 0;
}

/* ;をちゃんとつける */