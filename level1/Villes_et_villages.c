#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)

int main()
{
   int nbLieux;
   scanf("%d", &nbLieux);
   int nbVilles = 0;
   repeat(nbLieux)
   {
      int population;
      scanf("%d", &population);
      if(population > 10 * 1000)
      {
         nbVilles = nbVilles + 1;
      }
   }
   printf("%d", nbVilles);
}
