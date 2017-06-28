#include <stdio.h>

int   main()
{
   int   nbdepaquets, poids;
   
   scanf("%d %d", &nbdepaquets, &poids);
   if (poids * nbdepaquets > 105)
   {
      printf("Surcharge !\n");
   }
}
