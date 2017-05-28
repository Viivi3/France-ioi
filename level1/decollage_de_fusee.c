#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int   main()
{
   int   decompte = 100;
   repeat(101)
   {
      printf("%d\n", decompte);
      decompte = decompte - 1;
   }
   printf("Décollage !\n");
}
