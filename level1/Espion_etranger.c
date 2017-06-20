#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
#include <stdio.h>

int main()
{
   int dateDebut, dateFin, nbEntrees;
   scanf("%d", &dateDebut);
   scanf("%d", &dateFin);
   scanf("%d", &nbEntrees);
   int nbPersonnes = 0;
   repeat(nbEntrees)
   {
      int date;
      scanf("%d", &date);
      if( (dateDebut <= date) && (date <= dateFin) )
      {
         nbPersonnes = nbPersonnes + 1;
      }
   }
   printf("%d", nbPersonnes);
}
