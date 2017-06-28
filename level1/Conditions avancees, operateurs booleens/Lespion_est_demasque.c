#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
#include <stdio.h>
int main()
{
   int   nbPersonnes, taille, age, poids, cheval, cheveux;
   scanf("%d\n", &nbPersonnes);
   
   repeat(nbPersonnes)
   {
      int   cr = 0;
      scanf("%d\n", &taille);
      scanf("%d\n", &age);
      scanf("%d\n", &poids);
      scanf("%d\n", &cheval);
      scanf("%d\n", &cheveux);
      
      if (taille >= 178 && taille <= 182)
      {
         cr++;
      }
      if (age >= 34)
      {
         cr++;
      }
      if (poids < 70)
      {
         cr++;
      }
      if (cheval == 0)
      {
         cr++;
      }
      if (cheveux == 1)
      {
         cr++;
      }
      if (cr == 5)
      {
         printf("Très probable\n");
      }
      else if (cr == 3 || cr == 4)
      {
         printf("Probable\n");
      }
      else if (cr == 1 || cr == 2)
      {
         printf("Peu probable\n");
      }
      else
      {
         printf("Impossible\n");
      }
   }
}
