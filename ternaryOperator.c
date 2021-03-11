#include <stdio.h>

/*
三項演算子
if(条件){
    return A;
}else{
    return B;
}
返り値 = (条件) ? A :B;
*/

float getMax(float a, float b)
{
    /*
    if (a >= b){
        return 0;
    }
    else{
        return b;
    }
*/
    return (a >= b) ? a : b;
}

int main(void)
{
    float result;
    result = getMax(2.3, 5.2);
    printf("%f\n", result);

    return 0;
}