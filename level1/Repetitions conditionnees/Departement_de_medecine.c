#include <stdio.h>
int main()
{
   int populationVille;
   scanf("%d", &populationVille);
   int numJour = 1;
   int nbMalades = 1;
   while (nbMalades < populationVille)
   {
      numJour = numJour + 1;
      nbMalades = nbMalades * 3;
   }
   printf("%d\n", numJour);
}
