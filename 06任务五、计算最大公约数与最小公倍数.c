//辗转相除法
#include <stdio.h>
int main()
{
        int a = 0;
        int b = 0;
        printf("请输入两个整数："); 
        scanf("%d %d", &a, &b);
        int z = a * b;
        //求最大公约数：
        int c = 0;
        while (a % b != 0)
        {
                c = a % b;
                a = b;
                b = c;
        }
        printf("最大公约数为：%d\n", b);
        //求最小公倍数：
        int min = z / b;
        printf("最小公倍数：%d\n", min);
        return 0;
}
