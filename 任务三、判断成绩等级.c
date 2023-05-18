#include<stdio.h> 
char grade(int a);//函数声明    
void main()
{ 
    while(1)
    {
    int a;
    char score;
    begin:
 printf("请输入分数:\t");
 scanf("%d",&a);
 score=grade(a); //函数调用 

 if(a<0||a>100)
 {
  //printf("输入错误，请重新输入\n"); 
  goto exit;
 }
 else 
 printf("等级:\t\t%c\n\n",score); 
  goto begin;
      exit:
       system("pause");
      break;
      }  
 }
 //函数定义 
 char grade(int a)
 {
  char score;
  if(a<=100&&a>=90)
  {
   score='A';
   } 
 if(a>=80&&a<90)
 {
  score='B';
 }
 if(a>=70&&a<80)
 {
  score='C';
 }
 if(a>=60&&a<70)
 {
  score='D';
 }
 if(a>=0&&a<60)
 {
  score='E';
 }
 return score;
 }
