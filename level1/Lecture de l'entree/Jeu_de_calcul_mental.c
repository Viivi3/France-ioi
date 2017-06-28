#include <stdio.h>

int main()
{
   int nbNombres;
   
   scanf("%d", &nbNombres);
   
   int resultat = 66;
   for (int facteur = 1; facteur <= nbNombres; facteur = facteur + 1)
   {
      resultat = resultat * facteur;
      printf("%d\n", resultat);
   }
}
