#include<stdio.h>
 
int main()
{
   int a[5];
   printf("���������ݣ�\n");
   int i,j;
   for(i = 0;i < 5;i ++)
   {
    scanf("%d",&a[i]); //�������� 
   }
   
   for(i = 0;i < 4;i ++)  //����˫��ѭ�� 
   {
    for(j = 0;j < 5 - 1 - i;j++)
    {
      if(a[j] > a[j+1])     //����Ĭ�ϲ������������� 
   {
    int temp;        //����һ����ʱֵ���洢���ݣ��Դ����ﵽ������ֵ��Ŀ��
   temp = a[j];
   a[j] = a[j+1];
   a[j+1] = temp;
   } 
 }
   }
   
   printf("����õ�����Ϊ��\n");
   for(i = 0;i < 5;i ++)    //��forѭ�������������������ɵ����� 
   {
     printf("%d ",a[i]);
   }
   return 0;
}
