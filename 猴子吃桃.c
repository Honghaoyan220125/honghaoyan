    #include <stdio.h>

      int main()
         {
          int a,b,day;
          //printf("请输入剩下一个桃子的天数:");
          //scanf("%d",&day);
          day = 9;
          b=1;
          while(day>0){
          a=(b+1)*2;
          b=a;
          day--;
          }
         printf("第一天摘桃子的个数:%d",a);
         return 0;
        }
