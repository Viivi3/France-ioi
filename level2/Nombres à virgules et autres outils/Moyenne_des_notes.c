#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb) ; _loop <= _max ; _loop++)
int main()
{
   int nombreNotes;
   int sommeNotes = 0;
   scanf("%d", &nombreNotes);
   repeat(nombreNotes)
   {
      int note;
      scanf("%d", &note);
      sommeNotes = sommeNotes + note;
   }
   printf("%lf\n", (double)(sommeNotes) / (double)(nombreNotes));
}
