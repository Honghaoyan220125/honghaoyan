#include<stdio.h>
#include<string.h>
#define M 100 //定义最大学生数
struct Student
{
    int num;
    char name[20];
    float score[3];
    float aver;
};
void input(struct Student stu[], int n);
void sort(struct Student stu[], int n);
void print(struct Student stud);
int main()
{
    struct Student hhy[M];
    int studentCount, i;
    printf("请输入学生人数：");
    scanf("%d", &studentCount);
    input(hhy, studentCount);
    sort(hhy, studentCount);
    printf("\n输出学生信息\n"); 
    printf("学号\t姓名\tC语言\tOPP\t数据库\t平均成绩\t等级\n");
    for(i = 0; i < studentCount; i++)
    {
        print(hhy[i]); //输出每个学生的信息
    }
    return 0;
}
void input(struct Student stu[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("第%d个学生：\n",i+1);
        printf("学号\t姓名\tC语言\tOPP\t数据库:\n");
        scanf("%d %s %f %f %f", &stu[i].num, stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        printf("\n");
        stu[i].aver = (stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
    }
}
void sort(struct Student stu[], int n)
{
    int i, j;
    struct Student temp;
    for(i = 0; i < n-1; i++)
    {
        for(j = 0; j < n-i-1; j++)
        {
            if(stu[j].aver < stu[j+1].aver)
            {
                temp = stu[j];
                stu[j] = stu[j+1];
                stu[j+1] = temp;
            }
        }
    }
}
void print(struct Student stud)
{
    char grade[10];
    if (stud.aver>=90 && stud.aver<=100) 
    {
        strcpy(grade, "优秀");
    } 
    else if (stud.aver>=80&& stud.aver<90)
    {
        strcpy(grade,"良好");
    }
    else if (stud.aver>=70 && stud.aver<80) 
    {
        strcpy(grade, "中等");
    }
    else if (stud.aver>=60&& stud.aver<70)
    {
        strcpy(grade,"合格");
    }
    else if (stud.aver>=0&& stud.aver<60)
    {
        strcpy(grade, "不合格");
    }

    printf("%d\t%s\t%5.1f\t%5.1f\t%5.1f\t%6.2f\t\t%s\n", stud.num, stud.name, stud.score[0], stud.score[1], stud.score[2], stud.aver, grade);
}
