#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	printf("请输入一个小于1000的正数a=");
	scanf("%f",&a);
	 
	if(a>0&&a<1000)
	{
	  
	   b=sqrt(a);
		//m=sqrt 'a';
		printf("a的平方根为：b=%4.0f\n",b);     //输入3时，其平方根为的整数部分为2 
	}
	else
	{
		printf("请重新输入！\n");
		
	}
	
//	system("pause");	
	return 0;
 } 
