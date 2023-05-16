#include<stdio.h>
int counthhy(int number,int digtal);
int main()
{
	int number,digtal;
	printf("请输入一个长整数及一个数字：");
	scanf("%d %d",&number,&digtal);
	printf("%d中包含数字%d的个数为%d",number,digtal,counthhy(number,digtal));
	return 0; 
	
}
int  counthhy(int number,int digtal)
{
	int cnt=0,flag;
	if(number<0)
	{number*=-1;
	 } 
	 while(number>=10)
	 { 
	   flag=number%10;
	   number/=10;
	   if(flag==digtal)
	   {cnt++;
	   }}
	   if(number==digtal)
	   {cnt++;
	   }
	   return cnt;
	 }
	 

