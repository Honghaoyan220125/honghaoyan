#include<stdio.h>
#define pi 3.14;
float S(float r)
{
	float s;
	s = r*r*pi;
	return s;
	
}
double l(double r)
{
	float l;
	l=2*r*pi;
	return l;
}
void main()
{
	float r;
	float x,y;
	printf("请输入圆的半径：");
	scanf("%f",&r);
	x=l(r); 
	y=S(r);
	printf("该圆的面积为%.2f\n该圆的周长为%.2f",x,y);
}

