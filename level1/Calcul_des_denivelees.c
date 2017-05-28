#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)

int main()
{
   int nbVariations, positif = 0, negatif = 0;
   scanf("%d", &nbVariations);
   repeat(nbVariations)
   {
      int variation;
      scanf("%d", &variation);
      if(variation > 0)
      {
         positif = positif + variation;
      }
      else
      {
         negatif = negatif - variation;
      }
   }
   printf("%d\n", positif);
   printf("%d\n", negatif);
}
