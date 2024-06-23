#include <stdio.h>

/**
 * 在不使用&&或||的条件下编写一个与上面的for循环语句等价的循环语句
 */
int main() {

    enum loop {YES,NO};
    enum loop okloop = YES;  // okloop是一个枚举变量
    int i = 0;
    int lim = 200;
    char c ;
    char s[lim] ;
    while (okloop == YES)
    {
        if (i >= lim-1)
        {
            okloop = NO;
        } else if ((c = getchar()) == '\n')
        {
            okloop = NO;
        } else if (c == EOF)
        {
            okloop = NO;
        } else {
            s[i] = c;
            ++i;
        }
    }

    s[i] = '\0'; // 在字符串末尾添加空字符
    printf("Input string: %s\n", s);
    
    return 0;
}