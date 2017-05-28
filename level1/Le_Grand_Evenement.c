#include <stdio.h>
#include "robot.h"
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int   main()
{
   repeat (9)
   {
      haut();
   }
   repeat (9)
   {
      droite();
   }
   repeat (9)
   {
      bas();
   }
   gauche();
   repeat (4)
   {
      repeat (8)
      {
         haut();
      }
      gauche();
      repeat (8)
      {
         bas();
      }
      gauche();
   }
}
