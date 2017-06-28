#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int   main()
{
   int   nbBonbons = 0;
   int   nbTirs = 1;
   
   repeat (50)
   {
      nbBonbons = nbBonbons + nbTirs;
      printf("%d\n", nbBonbons);
      nbTirs = nbTirs + 1;
   }
}
