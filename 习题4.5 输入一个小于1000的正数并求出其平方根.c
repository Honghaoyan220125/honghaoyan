#include<stdio.h>
#include<math.h>
int main()
{
	float a,b;
	printf("������һ��С��1000������a=");
	scanf("%f",&a);
	 
	if(a>0&&a<1000)
	{
	  
	   b=sqrt(a);
		//m=sqrt 'a';
		printf("a��ƽ����Ϊ��b=%4.0f\n",b);     //����3ʱ����ƽ����Ϊ����������Ϊ2 
	}
	else
	{
		printf("���������룡\n");
		
	}
	
//	system("pause");	
	return 0;
 } 
