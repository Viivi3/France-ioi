#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
#include <stdio.h>

int   main()
{
   int   nbJetons;
   scanf("%d\n", &nbJetons);
   
   int x, y;
   repeat(nbJetons)
   {
      scanf("%d\n", &x);
      scanf("%d\n", &y);
      
      if ((x >= 10 && x <= 85 && y >= 10 && y <= 55) && !(x >= 25 && x <= 50 && y >= 20 && y <= 45))
      {
         printf("Dans une zone bleue\n");
      }
      else if ((x >= 15 && x <= 45 && y >= 60 && y <= 70) || (x >= 60 && x <= 85 && y >= 60 && y <= 70))
      {
         printf("Dans une zone rouge\n");
      }
      else if (x > 90 || x < 0 || y > 70 || y < 0)
      {
         printf("En dehors de la feuille\n");
      }
      else
      {
         printf("Dans une zone jaune\n");
      }
   }
}
