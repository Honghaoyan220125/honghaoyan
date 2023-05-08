#include<stdio.h>
 
int main()
{
   int a[5];
   printf("请输入数据：\n");
   int i,j;
   for(i = 0;i < 5;i ++)
   {
    scanf("%d",&a[i]); //输入数据 
   }
   
   for(i = 0;i < 4;i ++)  //采用双重循环 
   {
    for(j = 0;j < 5 - 1 - i;j++)
    {
      if(a[j] > a[j+1])     //这里默认采用升序来排列 
   {
    int temp;        //定义一个临时值来存储数据，以此来达到交换数值的目的
   temp = a[j];
   a[j] = a[j+1];
   a[j+1] = temp;
   } 
 }
   }
   
   printf("排序好的数组为：\n");
   for(i = 0;i < 5;i ++)    //用for循环来遍历并输出排序完成的数组 
   {
     printf("%d ",a[i]);
   }
   return 0;
}
