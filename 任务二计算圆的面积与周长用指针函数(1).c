#include<stdio.h>
#define pi 3.14 
int show(float r,float *l,float *area) 
{
    if (r<0) 
	{ // �жϰ뾶�Ƿ�С�� 0
        return -1; // ����뾶С�� 0������-1
    } 
    *l=2*pi*r;
    *area=pi*r*r;
    return 0; // ����뾶���ڵ��� 0������ 0
}
int main() 
{
    float r ; 
    printf("������Բ�İ뾶ֵ:");
    scanf("%f",&r);   
    float l, area;
    int ret = show(r,&l,&area); // ���ú��������շ���ֵ 
    if (ret == -1)
	 { // �������-1�����������ʾ
        printf("�뾶ֵӦ���ڵ��� 0");
        return 0;
    }
    printf("��Բ�İ뾶Ϊ%.2f,�ܳ�Ϊ%.2f\n", r,l);
    printf("��Բ�İ뾶Ϊ%.2f,���Ϊ%.2f", r, area);
    return 0;
}
