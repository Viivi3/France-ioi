#include <stdio.h>

int   main()
{
   int   tempMin;
   int   tempMax;
   
   scanf("%d", &tempMin);
   scanf("%d", &tempMax);
   
   while(tempMin <= tempMax)
   {
      printf("%d\n", tempMin);
      tempMin = tempMin + 1;
   }
}
