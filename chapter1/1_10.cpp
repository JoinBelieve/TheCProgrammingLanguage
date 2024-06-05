/**
 * 编写一个将输入复制到输出的程序，并将其中的制表符替换为\t，回退符\b，将反斜杠替换为\\。以可见的方式显示出来。
 */
#include <stdio.h>

int main()
{
    char c ;
    printf("请输入字符：\n");
    while ((c = getchar()) != EOF)
    {
        if (c == '\t')
        {
            printf("\\t");
        }
        else if (c == 'i')
        {
            printf("\\n");
        }
        else if (c == '\\')
        {
            printf("\\\\");
        }
        else
        {
            putchar(c);
        }
    }
    return 0;
}
