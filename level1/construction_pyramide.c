#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int cubes = 0;
   int longueur = 1;
    
   repeat(9)
   {
      cubes = cubes + longueur * longueur * longueur;
      longueur = longueur + 2;
   }
   printf("%d\n", cubes);
}
