#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)

int main()
{
   int nbMarchands;
   scanf("%d", &nbMarchands);
   
   int minPrix = 1000 * 1000, posMinPrix = -1, pos = 1;
   repeat(nbMarchands)
   {
      int prix;
      scanf("%d", &prix);
      if(prix <= minPrix)
      {
         minPrix = prix;
         posMinPrix = pos;
      }
      pos = pos + 1;
   }
   printf("%d", posMinPrix);
}
