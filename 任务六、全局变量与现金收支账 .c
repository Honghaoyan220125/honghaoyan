#include<stdio.h>
#include<stdlib.h>
void income(float amount);
void expend(float amount);
float cash=0;
void main()
{
 int choice;
 float amount;
 while(1)
 {
  makechoice:
  printf("1-Income,2-Expend,3-Balance,0-Exit\n");
  printf("Make a choice please:");
  scanf("%d",&choice);
  
  if(choice<0||choice>3)
  {
   printf("Select error,please re-enter!\n\n");
   goto makechoice;
  }
  if(choice==0)
  {
   printf("Thanks!\n");
   break;
  }
  if(choice==3)
  {
   printf("Current balance:%.2f\n\n",cash);
   goto makechoice;
  }
  printf("Enter the amount of cash:");
  scanf("%f",&amount);
  
  if(choice==1)
  {
   income(amount);
  }
  else
  { expend(amount);}
  printf("\n");
 }
 system("pause");
}
void income(float amount)
{
 cash=cash+amount;}
void expend(float amount)
{
 cash=cash-amount;} 
