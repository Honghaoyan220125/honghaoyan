#include<stdio.h> 
char grade(int a);//��������    
void main()
{ 
    while(1)
    {
    int a;
    char score;
    begin:
 printf("���������:\t");
 scanf("%d",&a);
 score=grade(a); //�������� 

 if(a<0||a>100)
 {
  //printf("�����������������\n"); 
  goto exit;
 }
 else 
 printf("�ȼ�:\t\t%c\n\n",score); 
  goto begin;
      exit:
       system("pause");
      break;
      }  
 }
 //�������� 
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
