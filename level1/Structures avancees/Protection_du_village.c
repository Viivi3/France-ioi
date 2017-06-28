#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)

int main()
{
   int nbMaisons;
   scanf("%d", &nbMaisons);
    
   int xMin = 1000 * 1000, xMax = 0, yMin = 1000 * 1000, yMax = 0;
   repeat(nbMaisons)
   {
      int posX, posY;
      scanf("%d %d", &posX, &posY);
      if(posX < xMin)
      {
         xMin = posX;
      }
      if(posX > xMax)
      {
         xMax = posX;
      }
      if(posY < yMin)
      {
         yMin = posY;    
      }
      if(posY > yMax)
      {
         yMax = posY;
      }
   }      
   int largeur = xMax - xMin, hauteur = yMax - yMin;
   int perimetre = 2 * (largeur + hauteur);
   printf("%d", perimetre);
}
