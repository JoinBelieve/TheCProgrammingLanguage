/**
 * 1-9:编写一个将输入复制到输出的程序，并将其中连续的多个空格用一个空格代替。
*/

#include <stdio.h>

#define NONBLACK 'a'

int main(){
    int c , lastc;
    lastc = NONBLACK;
    while ((c = getchar()) != EOF)
    {
        if (c != ' ')
            putchar(c);
        if (c == ' ')
            if (lastc != ' ')  // 不等于空，才存字符
                putchar(c);
        lastc = c;
    }
    return 0;
}

