#include <stdio.h>
 
int main()
{
   int nbProduits;
   scanf("%d\n",&nbProduits);
    
   int nbSouhaits[nbProduits];
   for (int numeroProduit = 0; numeroProduit < nbProduits; numeroProduit = numeroProduit + 1)
   {
      nbSouhaits[numeroProduit] = 0;
   }
    
   int nbPersonnes;
   scanf("%d\n",&nbPersonnes);
   for (int idPersonne = 0; idPersonne < nbPersonnes; idPersonne = idPersonne + 1)
   {
      int numeroProduit;
      scanf("%d\n",&numeroProduit);
      nbSouhaits[numeroProduit] = nbSouhaits[numeroProduit] + 1;
   }
     
   for (int numeroProduit = 0; numeroProduit < nbProduits; numeroProduit = numeroProduit + 1)
   {
      printf("%d\n",nbSouhaits[numeroProduit]);
   }
}
