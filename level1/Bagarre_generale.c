#include <stdio.h>

int   main()
{
   int   champA, champE;
   scanf("%d %d", &champA, &champE);
   
   if (champA - champE > 10)
   {
      printf("La famille Arignon a un champ trop grand\n");
   }
   else if (champE - champA > 10)
   {
      printf("La famille Evaran a un champ trop grand\n");
   }
}
