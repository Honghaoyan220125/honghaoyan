//#include<stdio.h> 
//int main()
 // {
  //	printf("This is a C program.\n");
  //	return 0;
  	 //}//
  	 
//#include<stdio.h>
//int main()
//{
//	int a,b,sum;
//	a=123;
//	b=456;
//	sum=a+b;
//	printf("sum is %d\n",sum);
//	return 0; 
	
// } 

#include<stdio.h>
//������
int main()
{
	int max(int x,int y);
	int a,b,c;
	scanf("%d,%d",&a,&b);
	c=max(a,b);
	printf("max=%d\n",c);
	return 0;
	}
	//�����������еĽϴ��ߵ�max����
	int max(int x ,int y) 
	{
		int z;
		if (x>y)z=x;
		else z=y;
		return(z);
			}
