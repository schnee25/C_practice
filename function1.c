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
    result = getMax(2.3, 5.2);
    printf("%f\n", result);
    return 0;
}

/*float型は4バイト＝32ビットのサイズ
符号部 1bit
指数部 8bit
仮数部 23bit
有効桁数は二進法で24、10進法では約7桁*/

/*ある数を、A×BC という形で表現したとき、
A を仮数部、B を基数、C を指数部と言う*/