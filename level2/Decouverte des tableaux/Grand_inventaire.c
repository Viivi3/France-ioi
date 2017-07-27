#include <stdio.h>
 
int main()
{
   int quantite[11] = {0};
   int nbLignes;
   scanf("%d\n",&nbLignes);
   
   for (int idLigne = 0; idLigne < nbLignes; idLigne = idLigne + 1)
   {
      int numeroProduit;
      int variation;
      scanf("%d%d\n", &numeroProduit, &variation);
      quantite[numeroProduit] = quantite[numeroProduit] + variation;
   }
   for (int numeroProduit = 1; numeroProduit <= 10; numeroProduit = numeroProduit + 1)
   {
      printf("%d\n",quantite[numeroProduit]);
   }
}
