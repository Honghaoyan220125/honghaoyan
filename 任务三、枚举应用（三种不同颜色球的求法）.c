#include<stdio.h>
int main()
{
	enum Color{red,yellow,blue,white,black                            //����ö������enum Color 
	};
	enum Color i,j,k,pri;                                             //����ö�ٱ���i.j.k.pri; 
	int n,loop;                                                      
	n=0;
	for(i=red;i<=black;i++)                                          //��ѭ��ʹi��ֵ��red ��black 
	  for(j=red;j<=black;j++)                                        //��ѭ��ʹj ��ֵ��red��black 
	     if(i!=j)                                                     //�������ͬɫ 
	     {
	     	for(k=red;k<=black;k++)                                   // ��ѭ��ʹk ��ֵ��red��black
	     	if((k!=i)&&(k!=j))                                         //�������ͬɫ 
	     	{
	     		n=n+1;                                                //���������Ĵ�����һ 
	     		printf("%-4d",n);                                   //�����ǰʹ�ڼ���������������� 
	     		for(loop=1;loop<=3;loop++)                         //�Ⱥ��������ֱ��� 
	     		{switch(loop)                                        //loop��ֵ��1�䵽3 
	     		{case 1:pri =i;break;                                   //loop��ֵΪ1ʱ���ѵ�һ�������ɫ����pri 
	     		 case 2:pri=j;break;                                 //loop��ֵΪ2ʱ���ѵڶ��������ɫ����pri
	     		 case 3:pri=k;break;                                   // loop��ֵΪ3ʱ���ѵ�3�������ɫ����pri
	     		 defaultL:break;
				 }
				 switch(pri)                                          //���������ɫ�����Ӧ������ 
				 {
				 	case red:printf("%-10s","red");break;               //pri��ֵ����ö�ٳ���redʱ�����red�� 
				 	case yellow:printf("%-10s","yellow");break; //pri��ֵ����ö�ٳ���yellowʱ�����yellow��
				 	case blue:printf("%-10s","blue");break; //pri��ֵ����ö�ٳ���blueʱ�����blue��
				    case white:printf("%-10s","white");break; //pri��ֵ����ö�ٳ���whiteʱ�����white��
				    case black:printf("%-10s","black");break;
				    default:break;
				    
				 }
				 }
				 printf("\n");
				 
			 }
	 }
	 printf("\ntotal:%5d\n",n);
	 return 0;
}
