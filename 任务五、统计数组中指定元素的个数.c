#include <stdio.h>

int count(int* arr, int len, int target) {
    int cnt = 0; // ���������������ͳ��Ŀ��Ԫ�ص�����

    for (int i = 0; i < len; i++) { 
        if (*(arr + i) == target) { // ʹ��ָ���������Ԫ��
            cnt++;
        }
    }

    return cnt;
}

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5};
    int len = sizeof(arr) / sizeof(*arr); // �������鳤��
    int target = 2;

    int result = count(arr, len, target);
    printf("The number of target elements is: %d\n", result);

    return 0;
}
