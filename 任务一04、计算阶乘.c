#include<stdio.h>
#define N 5
void main()
{
	int i,fact;                           //Ϊʲô����i=1ʱ�������ִ��� 
	char choice;
	
	begin:
		printf("��ѡ��Ҫִ�еĹ��ܣ�\n\n");
		printf("F ͨ��forѭ������׳�\n");
		printf("Wͨ��whileѭ������׳�\n");
		printf("D ͨ��do-while ѭ������׳�\n");
		printf("X ������������\n");
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
			      
					printf("ллʹ�ã�\n");
				    goto exit;
				    break;
		 default:
					printf("������ѡ��\n");
					goto begin;
					} 
					  goto begin;
			         exit:
			         	printf("������ѡ��\n");
					 }
			         	
	              	
	
