#include <stdio.h>

int   main()
{
   int   de1, de2;
   scanf("%d %d", &de1, &de2);
   
   if (de1 + de2 >= 10)
   {
      printf("Taxe spéciale !\n");
      printf("36\n");
   }
   else
   {
      printf("Taxe régulière\n");
      printf("%d\n", (de1 + de2) * 2);
   }
}
