#include <stdio.h>

int   main()
{
   int depenses, somme = 0;
   scanf("%d", &depenses);

   while (depenses != -1)
   {
      somme = somme + depenses;
      scanf("%d", &depenses);
   }
   printf("%d\n", somme);
}
