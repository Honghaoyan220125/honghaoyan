#include<stdio.h>
struct student
{
	int num;
	char name[10];
	int c, oop, db;
	float avg;
};
void main()
{
	int i;
	struct student s,s1,s2;
	
	for(i=1;i<3;i++)
	{
		printf("请输入第%d个学生的信息：\n",i);
		scanf("%d%s%d%d%d",&s.num,s.name,&s.c,&s.oop,&s.db);
		s.avg=(float)(s.c+s.oop+s.db)/3;
		if(i==1)
		   s1=s;
		else
		   s2=s;
	}
	if(s1.avg<s2.avg)
	{s=s1;s1=s2;s2=s;
	}
	printf("\n学号     姓名     C语言     OOP     数据库     平均成绩 \n ");
	printf("%-10d%-10s%-8d%-8d%-8d%-6.lf\n",s1.num,s1.name,s1.c,s1.oop,s1.db,s1.avg);
	printf("%-10d%-10s%-6d%-6d%-6d%-6.lf\n",s2.num,s2.name,s2.c,s2.oop,s2.db,s2.avg);
}







 
