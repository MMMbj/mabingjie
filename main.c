//202411716230
//1030027168@qq.com
//马冰洁
#include <stdio.h>

int main() {

    int arr[] = { 10, 20, 30, 40, 50 };

    int length = sizeof(arr) / sizeof(arr[0]);

    printf("length: %d\n", length);
    for (int i = 0; i < length; i++) {
        printf("Element at index %d: %d\n", i, arr[i]);
    }

    return 0;
}
