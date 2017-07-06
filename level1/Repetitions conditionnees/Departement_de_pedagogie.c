#include <stdio.h>

int   main()
{
   int   nbatrouve;
   scanf("%d\n", &nbatrouve);
   int   nbtape;
   scanf("%d\n", &nbtape);
   int   essais = 1;
   while (nbtape != nbatrouve)
   {
      if (nbtape < nbatrouve)
      {
         printf("c'est plus\n");
         scanf("%d\n", &nbtape);
      }
      else
      {
         printf("c'est moins\n");
         scanf("%d\n", &nbtape);
      }
      essais++;
   }
   printf("Nombre d'essais nécessaires :\n");
   printf("%d", essais);
}
