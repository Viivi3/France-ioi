#include <stdio.h>
#include <math.h>

int   main()
{
   int   populationActuelle;
   scanf("%d\n", &populationActuelle);
   double   croissance;
   scanf("%lf\n", &croissance);
   printf("%d\n", (int)(populationActuelle * croissance/100 + populationActuelle));
}
