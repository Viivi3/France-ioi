#include <stdio.h>
 
int main()
{
   int deplacementInverse[6] = {0, 2, 1, 3, 5, 4};
 
   int nbDeplacements;
   scanf("%d\n",&nbDeplacements);
   int chemin[nbDeplacements];
     
   for (int numero = 0; numero < nbDeplacements; numero = numero + 1)
   {
      scanf("%d\n",&chemin[numero]);
   }
     
   for (int numero = nbDeplacements-1; numero >= 0; numero = numero - 1)
   {
      int deplacement = chemin[numero];
      printf("%d\n",deplacementInverse[deplacement]);
   }
}
