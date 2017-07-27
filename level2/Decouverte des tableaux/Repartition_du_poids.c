#include <stdio.h>
 
int main()
{
   int nbCharrettes;
   scanf("%d\n",&nbCharrettes);
   double poids[nbCharrettes];
     
   double poidsTotal = 0.0;
   
   for (int numero = 0; numero < nbCharrettes; numero = numero + 1)
   {
      scanf("%lf\n",&poids[numero]);
      poidsTotal = poidsTotal + poids[numero];
   }
     
   double poidsMoyen = poidsTotal / nbCharrettes;
     
   for (int numero = 0; numero < nbCharrettes; numero = numero + 1)  
   {
      printf("%lf\n",poidsMoyen - poids[numero]);
   }
}
