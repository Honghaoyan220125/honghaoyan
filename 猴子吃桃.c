    #include <stdio.h>

      int main()
         {
          int a,b,day;
          //printf("������ʣ��һ�����ӵ�����:");
          //scanf("%d",&day);
          day = 9;
          b=1;
          while(day>0){
          a=(b+1)*2;
          b=a;
          day--;
          }
         printf("��һ��ժ���ӵĸ���:%d",a);
         return 0;
        }
