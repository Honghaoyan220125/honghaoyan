#include<stdio.h>
#include<math.h>

double disthhy(double x1,double y1,double x2,double y2);
int main()
   {
      double x1,y1,x2,y2,distance;           //不能用int,否则结果算不出来。 
	  printf("Input(x1,y1):");
	  scanf("%lf %lf",&x1,&y1);
	  printf("Input(x2,y2):");
	  scanf("%lf %lf",&x2,&y2);
	 distance=disthhy(x1,y1,x2,y2);
	  printf("Distance:%.2f\n",distance);
	  return 0;    
   }
   
   double disthhy(double x1,double y1,double x2,double y2)
   {
   	double distance;
   	distance=sqrt(pow(x1-x2,2)+pow(y1-y2,2));
   	return distance;
   }
   
