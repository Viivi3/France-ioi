#include <stdio.h>
#include <math.h>

int   main()
{
   double   temps;
   scanf("%lf\n", &temps);
   double   distance = (340.29 * temps)/1000;
   printf("%lf\n", round(distance));
}
