#include<stdio.h>
#include<string.h>
#define M 100 //�������ѧ����
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
    printf("������ѧ��������");
    scanf("%d", &studentCount);
    input(hhy, studentCount);
    sort(hhy, studentCount);
    printf("\n���ѧ����Ϣ\n"); 
    printf("ѧ��\t����\tC����\tOPP\t���ݿ�\tƽ���ɼ�\t�ȼ�\n");
    for(i = 0; i < studentCount; i++)
    {
        print(hhy[i]); //���ÿ��ѧ������Ϣ
    }
    return 0;
}
void input(struct Student stu[], int n)
{
    int i;
    for(i = 0; i < n; i++)
    {
        printf("��%d��ѧ����\n",i+1);
        printf("ѧ��\t����\tC����\tOPP\t���ݿ�:\n");
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
        strcpy(grade, "����");
    } 
    else if (stud.aver>=80&& stud.aver<90)
    {
        strcpy(grade,"����");
    }
    else if (stud.aver>=70 && stud.aver<80) 
    {
        strcpy(grade, "�е�");
    }
    else if (stud.aver>=60&& stud.aver<70)
    {
        strcpy(grade,"�ϸ�");
    }
    else if (stud.aver>=0&& stud.aver<60)
    {
        strcpy(grade, "���ϸ�");
    }

    printf("%d\t%s\t%5.1f\t%5.1f\t%5.1f\t%6.2f\t\t%s\n", stud.num, stud.name, stud.score[0], stud.score[1], stud.score[2], stud.aver, grade);
}
