#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbTotalKarvas = 0;
   repeat (20)
   {
      int nbKarvas;
      scanf("%d", &nbKarvas);
      nbTotalKarvas = nbTotalKarvas + nbKarvas;
   }
   printf("%d\n", nbTotalKarvas);
}
