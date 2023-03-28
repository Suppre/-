#include <stdio.h>
#include <stdlib.h>

int max(int x,int y)
{
    if(x>y)
        return x;
        else
        return y;
}
int main ()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int max1=max(a,b);
    printf("max1=%d\n",max1);
    return 0;
}
