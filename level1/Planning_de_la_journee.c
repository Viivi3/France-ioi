#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)

int main()
{
   int   maPosition;
   scanf("%d", &maPosition);
   int   nbVillages;
   scanf("%d", &nbVillages);
   
   int   villageProche =0;
   repeat (nbVillages)
   {
      int   posVillage;
      scanf("%d", &posVillage);
      if (maPosition - 50 <= posVillage && maPosition + 50 >= posVillage)
      {
         villageProche++;
      }
   }
   printf("%d", villageProche);
}
