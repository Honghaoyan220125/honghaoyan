#include<stdio.h>
long long fact(int n);
void main()
{  
	int n;
	long long factorial;
	printf("请输入要求其阶乘地自然数:"); 
	scanf("%10d",&n);
	factorial =fact (n);
	
	printf("%d的阶乘(%d!)是:%10d\n",n,n,factorial);

 } 
 
     long long fact(int n)
      {
     	int i;
 	    long  long product =1;
     	for (i=1;i<n;i++)                                  //for 后面不要加{},否则阶乘算不出来 
 	    product = product *i;
		return product;                      return (product)与return  product两个的运行结果一样                      
   	   
	   
       }
