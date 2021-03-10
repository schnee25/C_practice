#include <stdio.h>
/*関数 複数の処理をまとめる
返り値の型 関数名(引数,...){
    処理;
    return 返り値;
}
*/

/*実数２つのうち大きい方を返す*/
float getMax(float a, float b)
{
    if (a >= b)
    {
        return 0;
    }
    else
    {
        return b;
    }
}
int main(void)
{
    float result;
    getMax(2.3, 5.2);
    printf("%f\n", result);
    return 0;
}