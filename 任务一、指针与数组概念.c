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
	/*!!!��ͳ������ֱ�Ӽ���!!!*/ 
	x=10;y=20;
	z=x+y;
	printf("%d+%d=%d\n",x,y,z);
	/*!!!ָ�뷽������Ӽ��㣡��!*/
	x=10;y=20;
	p=&y;
	z=x+ *p;
	printf("%d+%d=%d\n",x,y,z);
	/*!!!ָ�뷽������ַ����(��Ӽ��㣩��!!*/
	x=10;y=20;
	z=add(&x,&y);
	printf("%d+%d=%d\n",x,y,z);
    /*!!!ָ�뷽������ַ����(��Ӽ��㣩��!!*/
	p=sum(a,5);
	z= *p;
	printf("sum =%d \n",z);
	
	z=sumb(a,5);
	
	printf("sum=%d\n",z);
	system("pause");} 
	 
