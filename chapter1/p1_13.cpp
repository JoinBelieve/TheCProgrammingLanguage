/**
 * 练习1-13：编写一个程序，打印输入中单词长度的直方图。水平方向的直方图比较容易绘制，垂直方向的直方图则要困难些。
 */
#include <stdio.h>

#define MAX_WORD_LENGTH 10 // 允许的最大单词长度
#define IN 1    // 在单词中
#define OUT 0   // 在单词外

int main() {
    int c, i, j, state;
    int word_length = 0;
    int word_lengths[MAX_WORD_LENGTH + 1] = {0}; // 初始化单词长度计数数组

    state = OUT;

    // 读取输入并统计单词长度
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (state == IN) {
                if (word_length <= MAX_WORD_LENGTH) {
                    word_lengths[word_length]++;
                } else {
                    word_lengths[MAX_WORD_LENGTH]++;
                }
                word_length = 0;
            }
            state = OUT;
        } else {
            state = IN;
            word_length++;
        }
    }

    // 输出水平直方图
    printf("Horizontal Histogram of Word Lengths:\n");
    for (i = 1; i <= MAX_WORD_LENGTH; i++) {
        printf("%2d: ", i);
        for (j = 0; j < word_lengths[i]; j++) {
            printf("*");
        }
        printf("\n");
    }

    if (word_lengths[MAX_WORD_LENGTH] > 0) {
        printf("%2d+: ", MAX_WORD_LENGTH);
        for (j = 0; j < word_lengths[MAX_WORD_LENGTH]; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}

