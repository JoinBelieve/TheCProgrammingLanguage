/**
 * 练习1-19: 编写函数reverse(s)，将字符串s中的字符顺序颠倒过来。使用该函数编写一个程序，每次颠倒一个输入行中的字符顺序。
 * 
 * 思路：
 * 1） 通过getline方法获取输入行
 * 2） 对换首尾的字符位置
 */

#include <stdio.h>

#define MAXLINE     1000

int getline(char line[] , int maxline);
void reverse(char s[]);

int main(){
    char line[MAXLINE];
    while (getline(line,MAXLINE) > 0)
    {
       reverse(line);
       printf("%s",line);
    }
    
    return 0;
}

void reverse(char s[]){
    int i = 0;
    int j = 0;
    char temp;
    while (s[i] != '\0')
    {
        ++i;
    }
    --i;  // 退一格
    // 如果这个是\n再退一格
    if (s[i] == '\n')
    {
        --i;
    }
    // 首尾对换位置
    while (j < i)
    {
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
        --i;
        ++j;
    }
}


/**
 * read a line into s , return length
 */
int getline(char s[],int lim){
    int c,i,j;
    j = 0;
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++){
        if (i < lim - 2)
        {
            s[j] = c;
            ++j;
        }
    }
    if (c == '\n')
    {
        s[j] = c;
        ++i;
        ++j;
    }
    s[j] = '\0';
    return i;
}