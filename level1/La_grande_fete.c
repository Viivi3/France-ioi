#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
#include <stdio.h>
int main()
{
   int espionDebut, espionFin, nbInvites;
   scanf("%d", &espionDebut);
   scanf("%d", &espionFin);
   scanf("%d", &nbInvites);
   
   int nbSuspects = 0;
   repeat(nbInvites)
   {
      int debut, fin;
      scanf("%d", &debut);
      scanf("%d", &fin);
      if( !( (espionFin < debut) || (fin < espionDebut) ) )
      {
         nbSuspects = nbSuspects + 1;
      }
   }
   printf("%d", nbSuspects);
}
