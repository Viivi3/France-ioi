#include <stdio.h>

int main()
{
   int   nbPersonnes, nbFruits;
   scanf("%d%d\n", &nbPersonnes, &nbFruits);
   
   if (nbFruits % nbPersonnes == 0)
   {
      printf("oui\n");
   }
   else
   {
      printf("non\n");
   }
}
