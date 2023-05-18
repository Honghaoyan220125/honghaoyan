#include<stdio.h>
#include<math.h>
int judge(int m,int n);
int sum=0; 
void main()
{
 int m,n;
 int a=0;
 int i;
 printf("请输入两个正整数m和n的值:");
 scanf("%d%d",&m,&n);
 if(m>=1&&n<=500)
 {
 i=judge(m,n);
 printf("%d到%d之间素数的个数为%d\n",m,n,i);
 printf("这些素数之和为%d\n",sum); 
  } 
  else
  printf("输入范围错误，从重新输入!");

}
int judge(int m,int n)
{
  int j,i;
  int a=0;  
  if(m<2)
  m=2;//m小于2时直接从2开始判断 
 for(i=m;i<=n;i++) 
 {
   int flag=1;
   for(j=2;j<=sqrt(i);j++)
   {
    if(i%j==0)
    {
     flag=0;
     break;
    }
   }
   if(flag==1)
   {
    
    printf("%d  ",i);
    sum=sum+i;
    a++;
   }
}
printf("\n");
return a;
}
