#include<stdio.h>
#include<math.h>
int judge(int m,int n);
int sum=0; 
void main()
{
 int m,n;
 int a=0;
 int i;
 printf("����������������m��n��ֵ:");
 scanf("%d%d",&m,&n);
 if(m>=1&&n<=500)
 {
 i=judge(m,n);
 printf("%d��%d֮�������ĸ���Ϊ%d\n",m,n,i);
 printf("��Щ����֮��Ϊ%d\n",sum); 
  } 
  else
  printf("���뷶Χ���󣬴���������!");

}
int judge(int m,int n)
{
  int j,i;
  int a=0;  
  if(m<2)
  m=2;//mС��2ʱֱ�Ӵ�2��ʼ�ж� 
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
