#include <stdio.h>

int main()
{
   int nombreMaximumPierres;
   scanf("%d",&nombreMaximumPierres);
   int nombrePierres = 0;
   int hauteur = 1;
   while (nombrePierres + hauteur * hauteur <= nombreMaximumPierres)
   {
      nombrePierres = nombrePierres + hauteur * hauteur;
      hauteur = hauteur + 1;
   }
   printf("%d\n%d\n",hauteur - 1,nombrePierres);
   
   return 0;
}
