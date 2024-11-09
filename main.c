//202411716230
//1030027168@qq.com
//马冰洁
#include <stdio.h>
long long factorial(int n);
int main() {
    int number;
    scanf("%d", &number);
    if (number < 0) {
        printf("阶乘未定义于负整数。\n");
    }
    else {
        printf("%d 的阶乘是 %lld\n", number, factorial(number));
    }
    return 0;
}
long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    long long result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}
