#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
#include <stdio.h>
#include <stdbool.h>
int main()
{
   int numeroPersonne, tailleListe;
   scanf("%d", &numeroPersonne);
   scanf("%d", &tailleListe);
   
   bool estSorti = false;
   repeat(tailleListe)
   {
      int numero;
      scanf("%d", &numero);
      if(numero == numeroPersonne)
      {
         estSorti = true;
      }
   }
   
   if(estSorti)
   {
      printf("Sorti de la ville");
   }
   else
   {
      printf("Encore dans la ville");
   }
}
