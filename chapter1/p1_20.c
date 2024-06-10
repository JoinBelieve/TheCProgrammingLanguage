/**
 * 练习1-20：编写程序detab，将输入中的制表符替换成适当数目的空格，使空格充满到下一个制表符终止位的地方。假设制表符终止位的位置是固定的，
 * 比如每隔n列就会出现一个制表符终止符。n应该作为变量还是符号常量呢？
 * 
 * 作为符号常量：
 * 优点：终止位是固定的，可以通过代码直接知道值
 * 作为变量：
 * 优点：灵活性高，可以在运行时动态调整终止位的值。
 */

#include <stdio.h>

#define TABINC  8

int main(){
    int c;
    int nb = 0;
    int pos = 1;
    while ((c = getchar()) != EOF)
    {
       if (c == '\t')
       {
         nb = TABINC - (pos - 1) % TABINC;
         while (nb > 0)
         {
            putchar(' ');
            ++pos;
            --nb;
         }
       } else if (c == '\n')
       {
           putchar(c);
           pos = 1;
       } else{
            putchar(c);
            ++pos;
       }
    }
}



