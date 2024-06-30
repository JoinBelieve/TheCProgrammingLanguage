#include <stdio.h>

#define NO  0
#define YES 1

/**
 * 练习2-3：编写函数htoi(s),把由十六进制数字组成的字符串（包含可选的前缀0x或0X）转换为与之等价的整型值。
 * 字符串中允许包含的数字包括：0~9\a~f\A~F
 */

int htoi(char s[])
{
    int r, hexdigit, inhex, i;
    i = 0;
    if (s[i] == '0')
    {
        ++i;
        if (s[i] == 'x' || s[i] == 'X')
        {
            ++i;
        }
    }
    r = 0;
    inhex = YES;
    for (;  inhex == YES; ++i)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            hexdigit = s[i] - '0';
        }else if (s[i] >= 'a' && s[i] <= 'f')
        {
            hexdigit = s[i] - 'a' + 10;
        }else if (s[i] >= 'A' && s[i] <= 'F')
        {
            hexdigit = s[i] - 'A' + 10;
        }else{
            inhex = NO;
        }
        if (inhex == YES)
        {
            printf("r = %d, hexdigit = %d\n" , r , hexdigit);
            r = 16 * r + hexdigit;
        }
    }
    return r;
}


void squeeze(char s[], int c) {
    int i , j;
    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != c)
        {
           s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

int main(){
    char s[] = "0XF1";
    printf("result = %d" , htoi(s));
    return 0;
}

