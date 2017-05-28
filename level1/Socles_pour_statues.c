#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int largeurMax;
   int largeurMin;
   
   scanf("%d", &largeurMax);
   scanf("%d", &largeurMin);
   
   int   volume = 0;
   repeat(largeurMax - largeurMin + 1)
   {
      volume = volume + largeurMax * largeurMax;
      largeurMax = largeurMax - 1;
   }
   printf("%d\n", volume);
}
