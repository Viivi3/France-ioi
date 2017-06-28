#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int main()
{
   int nbMembres;
   scanf("%d", &nbMembres);
   int totalEquipe1 = 0, totalEquipe2 = 0;
   repeat (nbMembres)
   {
      int poids1, poids2;
      scanf("%d %d", &poids1, &poids2);
      totalEquipe1 = totalEquipe1 + poids1;
      totalEquipe2 = totalEquipe2 + poids2;
   }
   if (totalEquipe1 > totalEquipe2)
   {
      printf("L'équipe 1 a un avantage\n");
   }
   else
   {
      printf("L'équipe 2 a un avantage\n");
   }
   printf("Poids total pour l'équipe 1 : %d\n", totalEquipe1);
   printf("Poids total pour l'équipe 2 : %d\n", totalEquipe2);
}
