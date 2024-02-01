#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int a,b,s,d;
    float x,y,sum,diff;
    scanf("%d %d",&a,&b);
    scanf("%f %f",&x,&y);
    s=a+b;
    d=a-b;
    sum=x+y;
    diff=x-y;
    printf("%d %d",s,d);
    printf("\n%.1f %.1f",sum,diff);
    return 0;
}
