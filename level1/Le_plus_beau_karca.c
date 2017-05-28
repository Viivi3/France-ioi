#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int   main()
{
   int   nbKarvas, poids, age, longueurCornes, hauteurGarrot, note;
   
   scanf("%d", &nbKarvas);
   
   repeat (nbKarvas)
   {
      scanf("%d %d %d %d", &poids, &age, &longueurCornes, &hauteurGarrot);
      
      note = longueurCornes * hauteurGarrot + poids;
      printf("%d\n", note);
   }
}
