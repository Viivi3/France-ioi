#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
#include <stdio.h>
int main()
{
   int nbPersonnes;
   scanf("%d", &nbPersonnes);
   int nbMax = 0, nbActuel = 0;
   repeat(nbPersonnes * 2)
   {
      int numero;
      scanf("%d", &numero);
      if(numero > 0)
      {
         nbActuel = nbActuel + 1;
      }
      else
      {
         nbActuel = nbActuel - 1;
      }
      if(nbActuel > nbMax)
      {
         nbMax = nbActuel;
      }
   }
   printf("%d", nbMax);
}
