#include<stdio.h>
#define N 5
void main()
{
	int i,fact;                           //为什么输入i=1时程序会出现错误？ 
	char choice;
	
	begin:
		printf("请选择要执行的功能：\n\n");
		printf("F 通过for循环计算阶乘\n");
		printf("W通过while循环计算阶乘\n");
		printf("D 通过do-while 循环计算阶乘\n");
		printf("X 结束程序运行\n");
		choice = getchar();
		getchar();
		 i=1;
		 fact =1;
		 switch(choice){
		 	case'F':
		 	case'f':for(i=1;i<=N;i++)
		 	         
		 	        {
		 	        	fact *=i;}
		 	        	printf("%d!=%d\n",N,fact); 
					    break;
			case'W':
		    case'w':while(i<=N)
		              {
					    fact *=i;
		 	        	i++; }
		 	        printf("%d!=%d\n",N,fact);
			       break;
		    case'D':
		    case'd':do{
		 	        	fact *=i;
		 	        	i++;
				        }
						while(i<=N);
				       printf("%d!=%d\n",N,fact);
				       break;
		    case'X':
		   	case'x':
			      
					printf("谢谢使用！\n");
				    goto exit;
				    break;
		 default:
					printf("请重新选择！\n");
					goto begin;
					} 
					  goto begin;
			         exit:
			         	printf("请重新选择！\n");
					 }
			         	
	              	
	
