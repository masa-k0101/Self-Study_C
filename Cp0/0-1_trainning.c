#include<stdio.h>

int main(void)
{
    int a = 10;      //整数型変数aに10を代入
    double b = 3.5;  //小数型変数bに3.5を代入
    char c = 'A';    //文字型変数cにAを代入

    printf("number of a is: %d\n", a);   //表示，intの型出力フォーマットは%dであり， ,a で変数を指定
    printf("number of b is: %f\n", b);   //表示，doubleの型出力フォーマットは%fであり， ,b で変数を指定
    printf("number of c is: %c\n", c); //表示，charの型出力フォーマットは%cであり， ,c で変数を指定

    return 0;
}
