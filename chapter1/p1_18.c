/**
 * 练习1-18: 编写一个程序，删除每个输入行末尾的空格及制表符，并删除完全是空格的行
 */

#include <stdio.h>
#define MAXLINE     1000

int getline(char line[], int maxline);
int remove (char s[]);

int main(){
    char line[MAXLINE];
    while (getline(line,MAXLINE) > 0)
    {
       if (remove(line) > 0)
       {
         printf("%s",line);
       }
    }
    return 0;
}

/**
 * remove函数负责删掉字符串line末尾空格和制表符并返回它的新长度。如果长度大于0，就说明这行不存在空格和制表符的其他字符，则打印出来。
 * 反之，说明line完全是由空格和制表符构成的，将忽略这行。
 */
int remove(char s[]) {
    int i = 0;
    while (s[i] != '\n')
    {
        ++i;
    }
    --i;  // 退回到 \n
    while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
    {
        --i;
    }
    if (i >= 0)
    {
        ++i;
        s[i] = '\n';
        ++i;
        s[i] = '\0';
    }
    return i;
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


