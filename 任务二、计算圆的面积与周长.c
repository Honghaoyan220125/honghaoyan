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
	printf("������Բ�İ뾶��");
	scanf("%f",&r);
	x=l(r); 
	y=S(r);
	printf("��Բ�����Ϊ%.2f\n��Բ���ܳ�Ϊ%.2f",x,y);
}

