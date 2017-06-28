#include <stdio.h>

int   main()
{
   int   heure;
   scanf("%d", &heure);
   
   int   prixBase = 10;
   int   prixMax = 53;
   int   prixFinal = 0;
   prixFinal = prixBase + heure * 5;
   
   if (prixFinal > prixMax)
   {
      printf("%d\n", prixMax);
   }
   else
   {
      printf("%d\n", prixFinal);
   }
   
}
