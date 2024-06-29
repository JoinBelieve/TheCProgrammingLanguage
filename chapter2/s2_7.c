#include <stdio.h>

/**
 * 类型转换：“窄的操作数”转换为“宽的操作数”
 */

unsigned long int next = 1;

int atoi(char s[]);
int lower(int c);

int main(){
    char s[] = {'1','2','6'};
    printf("result = %d" , atoi(s));
    printf("\n ----------------- ");
    printf("lower result = %d" , lower('A'));
    return 0;    // 为什么要返回0呢？
}

/**
 * rand函数：返回值为 0～32767的伪随机数
 */
int rand(void) {
    next = next * 1103515245 + 12345;
    return (unsigned int) (next / 65536) % 32768;
}

/**
 * srand函数：为rand()函数设置种子数
 */
void srand(unsigned int seed){
    next = seed;
}

/**
 * lower函数：把字符c转换为小写形式，只对ASCII字符集有效；
 * 
 * Q：什么是ASCII字符集？
 * A：ASCII是一种表示文本的字符编码，它定义了128个字符，有哪些呢？
 * 主要有控制字符（换行符、回车符、制表符）和可打印字符（数字、字母大小写、标点符号等等），这些字符被分配到0-127的数字编码，
 * 每一个字符都有唯一的编码。
 */
int lower(int c){
    if (c >= 'A' && c <= 'Z')
    {
        printf("AAAAAA\n %d \n" , c);
        return c + 'a' - 'A';
    } else {
        printf("aaaa");
        return c;
    }
}

/**
 * atoi函数：将字符串s转换为相应的整型数 -> P42 
 */
int atoi(char s[]) {    
    int n = 0;
    for (int i = 0; s[i] >= '0' && s[i] <= '9' ; i++)
    {
        /**
         * Loop1: n = 0 , i = 0, s[i] = 1 , 10 * 0(n) + ('1'(s[i]) - '0') -> so. n = 1;
         * Loop2: n = 1 , i = 1 , s[i] = 2 , 10 * 1(n) + ('2'(s[i]) - '0') = 12 -> so.  n = 12;
         * Loop3: n = 2 , i = 2 , s[i] = 6 , 10 * 2(n) + ('6'(s[i]) - '0') = 126 -> so. n = 126;
         * 问题：为什么要*10？ 为什么'1'-'0'会是整数相减的结果？
         * 答：*10是为了将已解析的数据向左移动一位，为新数字字符腾出位置；
         * 因为'0','1'这些字符在字符集中对应的数值是一个连续的递增序列，所以减去‘0’之后得到的是对应的数字值。
         */
        n = 10 * n + (s[i] - '0');
        printf("n = %d \n",n);
    }
    return n;
}




