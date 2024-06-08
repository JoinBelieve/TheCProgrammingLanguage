/**
 * 垂直直方图
 */
#include <stdio.h>

#define MAX_WORD_LENGTH     10
#define IN  1
#define OUT 0

int main(){
    int c , i, j, state;
    int word_length = 0;
    int word_lengths[MAX_WORD_LENGTH + 1] = {0};

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

    // 找到最大计数
    int max_count = 0;
    for (i = 1; i <= MAX_WORD_LENGTH; i++) {
        if (word_lengths[i] > max_count) {
            max_count = word_lengths[i];
        }
    }

    // 输出垂直直方图
    printf("Vertical Histogram of Word Lengths:\n");
    for (i = max_count; i > 0; i--) {
        for (j = 1; j <= MAX_WORD_LENGTH; j++) {
            // 判断当前单词长度大于或者等于单词频次，如果大于则打印星号
            if (word_lengths[j] >= i) {
                printf(" * ");
            } else {
                printf("   ");
            }
        }
        printf("\n");
    }

    // 输出底部标签
    for (i = 1; i <= MAX_WORD_LENGTH; i++) {
        printf("%2d ", i);
    }
    printf("\n");

    return 0;

}

