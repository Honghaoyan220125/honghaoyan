#include <stdio.h>
#include<string.h>
char *lyrgrade(int *score)
{
    char *grade;
    if (*score>=90 && *score<=100) 
    {
        grade = "����";
    } 
    else if (*score>=80&& *score<90)
    {
        grade="����";
    }
    else if (*score>=70 && *score<80) 
    {
        grade = "ƽ��";
    }
    else if (*score>=60&& *score<70)
    {
        grade ="�ϸ�";
    }
    else if (*score>=0&& *score<60)
    {
        grade = "���ϸ�";
    }
    return grade;
}

int main()
{
    int score;
    int flag = 0;
    while (!flag)
    {
        printf("���������:\t");
        scanf("%d", &score);
        if (score < 0 || score > 100)
        {
            printf("�����������������\n");
            flag = 1;
        }
        else
        {
            char *grade =lyrgrade(&score);
            printf("�ȼ�:\t\t%s\n\n", grade);
        }
    }
    return 0;
}
