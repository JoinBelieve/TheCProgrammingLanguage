/**
 * 实例1-9
 */
#include <stdio.h>
#define MAXLINE     1000

int getline(char line[],int maxline);
void copy(char to[],char from[]);

/**
 * 打印最长的输入行
 */
int main(){
    int len; // 当前行
    int max = 0; // 目前为止发现的最长行的长度
    char line[MAXLINE];  // 当前的输入行
    char longest[MAXLINE];  // 用于保存最长的行

    while ((len = getline(line,MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest,line);
        }
    }
    if (max > 0)
    {
        printf("%s",longest);
    }
    return 0;
}

/**
 * getline函数；将一行读入s中并返回其长度
 */
int getline(char s[],int lim){
    int c,i;
    for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/**
 *  copy函数，将from复制到to，这里假定to足够大
 */
void copy(char to[], char from[]) {
    int i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}

