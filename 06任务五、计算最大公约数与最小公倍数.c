//շת�����
#include <stdio.h>
int main()
{
        int a = 0;
        int b = 0;
        printf("����������������"); 
        scanf("%d %d", &a, &b);
        int z = a * b;
        //�����Լ����
        int c = 0;
        while (a % b != 0)
        {
                c = a % b;
                a = b;
                b = c;
        }
        printf("���Լ��Ϊ��%d\n", b);
        //����С��������
        int min = z / b;
        printf("��С��������%d\n", min);
        return 0;
}
