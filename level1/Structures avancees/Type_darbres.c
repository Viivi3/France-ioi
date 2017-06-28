#include <stdio.h>

int   main()
{
   int   hauteur, folioles;
   scanf("%d\n %d", &hauteur, &folioles);
   
   if (hauteur <= 5 && folioles >= 8)
   {
      printf("Tinuviel");
   }
   else if (hauteur >= 10 && folioles >= 10)
   {
      printf("Calaelen");
   }
   else if (hauteur <= 8 && folioles <= 5)
   {
      printf("Falarion");
   }
   else if (hauteur >= 12 && folioles <= 7)
   {
      printf("Dorthonion");
   }
}
