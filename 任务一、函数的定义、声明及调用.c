#include<stdio.h>
long long fact(int n);
void main()
{  
	int n;
	long long factorial;
	printf("������Ҫ����׳˵���Ȼ��:"); 
	scanf("%10d",&n);
	factorial =fact (n);
	
	printf("%d�Ľ׳�(%d!)��:%10d\n",n,n,factorial);

 } 
 
     long long fact(int n)
      {
     	int i;
 	    long  long product =1;
     	for (i=1;i<n;i++)                                  //for ���治Ҫ��{},����׳��㲻���� 
 	    product = product *i;
		return product;                      return (product)��return  product���������н��һ��                      
   	   
	   
       }
