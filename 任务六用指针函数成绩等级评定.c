#include <stdio.h>
#include<string.h>
char *lyrgrade(int *score)
{
    char *grade;
    if (*score>=90 && *score<=100) 
    {
        grade = "优秀";
    } 
    else if (*score>=80&& *score<90)
    {
        grade="良好";
    }
    else if (*score>=70 && *score<80) 
    {
        grade = "平等";
    }
    else if (*score>=60&& *score<70)
    {
        grade ="合格";
    }
    else if (*score>=0&& *score<60)
    {
        grade = "不合格";
    }
    return grade;
}

int main()
{
    int score;
    int flag = 0;
    while (!flag)
    {
        printf("请输入分数:\t");
        scanf("%d", &score);
        if (score < 0 || score > 100)
        {
            printf("输入错误，请重新输入\n");
            flag = 1;
        }
        else
        {
            char *grade =lyrgrade(&score);
            printf("等级:\t\t%s\n\n", grade);
        }
    }
    return 0;
}
