#include <stdio.h>
#include <stdlib.h>

int main()
{
   int year,mon,days;
   printf("����������\n");
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
        printf("�������31��\n");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("�������30��");
    break;
    case 2:if(year%4==0)
    printf("�������29��");
    else
        printf("�������28��");
    break;
    default:printf("û�������");
    break;
   }

    return 0;
}
