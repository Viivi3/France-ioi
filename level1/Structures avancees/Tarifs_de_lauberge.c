#include <stdio.h>

int   main()
{
   int   age, poids;
   scanf("%d\n %d", &age, &poids);
   int   prix = 0;
   
   if (age == 60)
   {
      printf("%d", prix);
   }
   else if (age < 10)
   {
      printf("%d", prix + 5);
   }
   else if (poids >= 20)
   {
      printf("%d", prix + 40);
   }
   else
   {
      printf("%d", prix + 30);
   }
}
