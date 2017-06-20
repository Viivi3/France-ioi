#include <stdlib.h>
int   main()
{
   int   debut1, fin1, debut2, fin2;
   scanf("%d\n", &debut1);
   scanf("%d\n", &fin1);
   scanf("%d\n", &debut2);
   scanf("%d\n", &fin2);
   
   if ((debut1 <= debut2) && (debut2 <= fin1) || (debut1 <= fin2) && (fin2 <= fin1))
   {
      printf("Amis");
   }
   else if ((debut2 <= debut1) && (debut1 <= fin2) || (debut2 <= fin1) && (fin1 <= fin2))
   {
      printf("Amis");
   }
   else
   {
      printf("Pas amis");
   }
}
