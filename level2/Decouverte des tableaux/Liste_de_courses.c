#include <stdio.h>
 
int main()
{
   int prix[10] = {9, 5, 12, 15, 7, 42, 13, 10, 1, 20};
   int prixTotal = 0;
   int idIngredient = 0;
   while (idIngredient < 10)
   {
      int quantite;
      scanf("%d\n",&quantite);
      prixTotal = prixTotal + prix[idIngredient] * quantite;
      idIngredient++;
   }
   printf("%d\n",prixTotal);
}
