#include <stdio.h>

/**
 * 重新编写函数squeeze(s1,s2)，将字符串s1任何与字符串s2中的字符匹配的字符都删除。
 */
void squeeze(char s1[], char s2[]) {
    int i , j , k;
    // 外层循环：遍历字符串 s1
    for (i = k = 0; s1[i] != '\0'; i++)
    {
        // 内层循环：查找字符 s1[i] 是否在字符串 s2 中出现
        for (j = 0; s2[j] != '\0' && s2[j] != s1[i]; j++)
            ;
        // 如果在 s2 中未找到 s1[i]，则保留 s1[i]
        if (s2[j] == '\0')
        {
            s1[k++] = s1[i];
        }
    }
    // 在新字符串末尾加上字符串终止符 '\0'
    
    s1[k] = '\0';
    puts(s1);
}

int main() {
    char s1[] = "hello";
    char s2[] = "hro";
    squeeze(s1,s2);
    return 0;
}

/**
 * 问题：
 * - squeeze(s1,s2) 不能是 -> squeeze("hello","hel");
 * - ; 在循环中是什么意思？答：如果满足条件，继续循环
 */

