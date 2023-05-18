#include<stdio.h>
int main()
{
	int n;
	printf("请输入一个正整数n:");
	scanf("%d",&n);
	int facthhy(int n);
	int i;
	for(i=1;i<=n;i++)
	  printf("%d!=%d\n",i,facthhy(i));
    return 0;
}
int facthhy(int n)
{
	static int f=1;
	f=f*n;
	return(f);
}
