/**
 * 练习1-14: 编写一个程序，打印输入中各个字符出现频率的直方图
 */

#include <stdio.h>
#include <ctype.h>

#define MAXHIST 15
#define MAXCHAR 128

int main() {

    int c, i, j;
    int char_counts[MAXCHAR] = {0};

    // 读取输入并统计字符出现次数
    while ((c = getchar()) != EOF)
    {
        if (c >= 0 && c < MAXCHAR)
        {
            char_counts[c]++;
        }
    }

    // 打印直方图
    printf("Character Frequency Histogram:\n");

    for (i = 0; i < MAXCHAR; i++)
    {
        if (char_counts[i] > 0)
        {
            if (isprint(i)){
                printf("%c (%d): ",i,char_counts[i]);
            } else{
                printf("0x%02x (%d): " ,i,char_counts[i]);
            }
            for (j = 0; j < char_counts[i]; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    
    return 0;
}