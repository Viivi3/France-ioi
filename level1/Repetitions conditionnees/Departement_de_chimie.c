#include <stdio.h>

int   main()
{
   int   nbMesures, tempMin, tempMax;
   scanf("%d\n", &nbMesures);
   scanf("%d\n", &tempMin);
   scanf("%d\n", &tempMax);
   int   mesure, compte = 0;
   scanf("%d\n", &mesure);
   
   while (mesure <= tempMax && mesure >= tempMin && compte < nbMesures)
   {
      printf("Rien à signaler\n");
      compte++;
      scanf("%d\n", &mesure);
   }
   if (mesure < tempMin || mesure > tempMax)
   {
      printf("Alerte !!\n");
   }
}
