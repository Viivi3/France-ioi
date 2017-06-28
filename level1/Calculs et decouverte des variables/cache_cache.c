#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int compte = 1;
   repeat (100)
   {
      printf("%d\n", compte);
      compte = compte + 1;
   }
   printf("J'arrive !");
}
