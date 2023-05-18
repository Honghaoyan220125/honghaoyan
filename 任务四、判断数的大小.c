#include<stdio.h>
int main()
   {
	int max(),min();
	extern int A,B,C;
	printf("请输入这三个数：");
	scanf("%d %d %d",&A,&B,&C);
	printf("max is %d\nmin is %d\n",max(),min());
	return 0;
   } 
 
    int A,B,C;
    int max()
    {int m;
      m=A>B?A:B;
      if(C>m)m=C;
      return(m);}
	  
	int min()
	 {
	   int n;
	  n=A<B?A:B;
	  if(C<n)n=C;
	  return(n);
     }
