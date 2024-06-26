/**
 * P19 1—8：  编写一个统计空格、制表符与换行符个数的程序
 */
#include <stdio.h>

int main()
{
    int c, nb, nt, nl;
    nb = 0;
    nt = 0;
    nl = 0;
    while ((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            ++nb;
        }
        if (c == '\t')
        {
            ++nt;
        }
        if (c == '\n')
        {
            ++nl;
        }
    }
    printf("%d %d %d \n", nb, nt, nl);
    return 0;
}