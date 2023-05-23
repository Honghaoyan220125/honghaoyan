#include <stdio.h>

int count(int* arr, int len, int target) {
    int cnt = 0; // 定义计数器，用于统计目标元素的数量

    for (int i = 0; i < len; i++) { 
        if (*(arr + i) == target) { // 使用指针访问数组元素
            cnt++;
        }
    }

    return cnt;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int len = sizeof(arr) / sizeof(*arr); // 计算数组长度
    int target = 2;

    int result = count(arr, len, target);
    printf("The number of target elements is: %d\n", result);

    return 0;
}
