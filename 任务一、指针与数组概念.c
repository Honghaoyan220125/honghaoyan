#include<stdio.h>
int add(int *a,int *b)
{
	int c;
	c=*a + *b;
	return c;
}
int *sum (int s[],int n)
{
	int i,sum =0;
	for (i=0;i<n;i++)
	{
		sum +=s[i];
	}
	return &sum;
}
int sumb(int *p,int n)
{
	int i,sum =0;
	for(i=0;i<n;i++)
	{
		sum +=*(p+i);
		
	}
	return sum ;
}
void main()
{
	int x,y,z,a[5]={1,2,3,4,5};
	int *p;
	/*!!!传统方法：直接计算!!!*/ 
	x=10;y=20;
	z=x+y;
	printf("%d+%d=%d\n",x,y,z);
	/*!!!指针方法：间接计算！！!*/
	x=10;y=20;
	p=&y;
	z=x+ *p;
	printf("%d+%d=%d\n",x,y,z);
	/*!!!指针方法：传址调用(间接计算）！!!*/
	x=10;y=20;
	z=add(&x,&y);
	printf("%d+%d=%d\n",x,y,z);
    /*!!!指针方法：传址调用(间接计算）！!!*/
	p=sum(a,5);
	z= *p;
	printf("sum =%d \n",z);
	
	z=sumb(a,5);
	
	printf("sum=%d\n",z);
	system("pause");} 
	 
