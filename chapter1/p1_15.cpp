/**
 * 1-15: 重新编写1.2节中的温度转换程序，使用函数实现温度转换计算。
 */

#include <stdio.h>

#define LOWER 0
#define UPPER 300
#define STEP  20

// float celsius(float fahr);

int main() {
    float fahr = LOWER;
    while (fahr <= UPPER)
    {
       printf("%3.0f %6.1f\n", fahr, fahr);
       fahr = fahr + STEP;
    }
    return 0;
}

float celsius(float fahr) {
    return float((5.0 / 9.0) * (fahr - 32.0));
}
