#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int ligne = 1;
   repeat (20)
   {
      int colonne = 1;
      repeat (20)
      {
         printf("%d ", colonne * ligne);
         colonne = colonne + 1;
      }
      printf("\n");
      ligne = ligne + 1;
   }
}
