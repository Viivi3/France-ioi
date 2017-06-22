#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
#include <stdio.h>
int main()
{
   int nbPaires;
   scanf("%d", &nbPaires);
   repeat(nbPaires)
   {
      int xMin1, xMax1, yMin1, yMax1, xMin2, xMax2, yMin2, yMax2;
      scanf("%d", &xMin1);
      scanf("%d", &xMax1);
      scanf("%d", &yMin1);
      scanf("%d", &yMax1);
      scanf("%d", &xMin2);
      scanf("%d", &xMax2);
      scanf("%d", &yMin2);
      scanf("%d", &yMax2);
   
      if( ( (xMax2 <= xMin1) || (xMax1 <= xMin2) )
         || ( (yMax2 <= yMin1) || (yMax1 <= yMin2) ))
      {
         printf("NON\n");
      }
      else
      {
         printf("OUI\n");
      }
   }
}
