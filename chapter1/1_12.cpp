/*
* 编写一个程序，以每行一个单词的形式打印其输入
*/
#include <stdio.h>

#define IN  1
#define OUT 0

int main(){
    int c , state;
    state = OUT;
    while ((c = getchar()) != EOF)
    {
        // 判断变量c是否是一个单词分隔符
        if (c == ' ' || c == '\n' || c == '\t')
        {
            // 判断这个单词分隔符是否表示某个单词结束。如果是，就输出一个换行符并修改变量state值
            if (state == IN)
            {
                putchar('\n');
                state = OUT;
            }
        }else if (state == OUT)
        {
            state = IN;
            putchar(c);
        }else{ 
            putchar(c);
        }
    }
}

