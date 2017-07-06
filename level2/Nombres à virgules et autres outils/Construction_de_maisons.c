#include <stdio.h>
#include <math.h>

int main()
{
   double quantite;
   scanf("%lf\n", &quantite);
   int nbSacs = ceil(quantite / 60);
   int prix = nbSacs * 45;
   printf("%d\n",prix);
   
   return 0;
}
