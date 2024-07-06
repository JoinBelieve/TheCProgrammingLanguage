#include <stdio.h>
#include <string.h>
/**
 *  编写函数any(s1,s2),将字符s2中的任一字符在s1中第一次出现的位置作为结果返回。
 * 如果s1中不包含s2中的字符，则返回 -1.（标准库函数strpbrk具有同样的功能，但它返回的是
 * 指向该位置的指针。）
 */
int any(char s1[],char s2[]) {
    int i , j;
    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0' ; j++)
        {
            if (s1[i] == s2[j])
            {
                return i;
            }
        }
    }
    return -1;
}

int main(){
    char s1[] = "tbqawe";
    char s2[] = "cah";
    printf(" i = %d", any(s1,s2));
    return 0;
}
