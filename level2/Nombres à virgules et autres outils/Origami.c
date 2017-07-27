#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)

int main()
{
   double epaisseur = 0.11;
   repeat(15)
   {
      epaisseur = epaisseur * 2;
   }
   printf("%lf", epaisseur / 10);
}

