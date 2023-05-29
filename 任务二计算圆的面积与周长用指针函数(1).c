#include<stdio.h>
#define pi 3.14 
int show(float r,float *l,float *area) 
{
    if (r<0) 
	{ // 判断半径是否小于 0
        return -1; // 如果半径小于 0，返回-1
    } 
    *l=2*pi*r;
    *area=pi*r*r;
    return 0; // 如果半径大于等于 0，返回 0
}
int main() 
{
    float r ; 
    printf("请输入圆的半径值:");
    scanf("%f",&r);   
    float l, area;
    int ret = show(r,&l,&area); // 调用函数并接收返回值 
    if (ret == -1)
	 { // 如果返回-1，输出错误提示
        printf("半径值应大于等于 0");
        return 0;
    }
    printf("该圆的半径为%.2f,周长为%.2f\n", r,l);
    printf("该圆的半径为%.2f,面积为%.2f", r, area);
    return 0;
}
