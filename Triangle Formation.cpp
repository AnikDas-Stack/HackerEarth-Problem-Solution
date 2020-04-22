#include <stdio.h>
#include <math.h>

int main()
{
   int t, a, b, c, x, i;
   scanf("%d", &t);
   for(i=1; i<=t; i++)
   {
       scanf("%d %d %d %d", &a, &b, &c, &x);
       a+=x;
       b+=x;
       a= a*a;
       b= b*b;
       if(c== sqrt(a+b))
       {
           printf("YES\n");
       }
       else
       {
           printf("NO\n");
       }

   }
    return 0;
}

