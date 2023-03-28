#include <stdio.h>
#include <stdlib.h>

int main()
{
   int year,mon,days;
   printf("请输入年月\n");
   scanf("%d%d",&mon,&year);
   switch(year)
   {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("这个月有31天\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("这个月有30天");
    break;
    case 2:if(year%4==0)
    printf("这个月有29天");
    else
        printf("这个月有28天");
    break;
    default:printf("没有这个月");
    break;
   }

    return 0;
}
