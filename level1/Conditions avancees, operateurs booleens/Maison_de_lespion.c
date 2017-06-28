#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
#include <stdio.h>
int main()
{
   int   aMin, aMax, oMin, oMax, nbTotalMaisons;
   scanf("%d\n", &aMin);
   scanf("%d\n", &aMax);
   scanf("%d\n", &oMin);
   scanf("%d\n", &oMax);
   scanf("%d\n", &nbTotalMaisons);
   
   int   a, o;
   int   nbMaisonsZone = 0;
   repeat(nbTotalMaisons)
   {
      scanf("%d\n", &a);
      scanf("%d\n", &o);
   
      if((a >= aMin && a <= aMax) && (o >= oMin && o <= oMax))
      {
         nbMaisonsZone++;
      }
   }
   printf("%d\n", nbMaisonsZone);
}
