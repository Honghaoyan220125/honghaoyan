#include<stdio.h>
int main()
{
 int n,sum,count;
 sum=0;
 count=0;//
 printf("请输入一个整数:");
 scanf("%d",&n);
 while(1)
 {
  count++;
  sum=sum+n%10;
  n=n/10;
  if(n==0)
  {
   break;
  }
 }
 printf("该数为%d位,其各位数字之和为%d",count,sum);
 return 0;
}
	
	 
	
