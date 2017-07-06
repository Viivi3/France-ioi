#include <stdio.h>

int   main()
{
   double   legumes;
   scanf("%lf\n", &legumes);
   double   poids, age, prix;
   while (legumes > 0)
   {
      scanf("%lf\n", &poids);
      scanf("%lf\n", &age);
      scanf("%lf\n", &prix);
      printf("%lf\n", prix / poids);
      legumes--;
   }
}
