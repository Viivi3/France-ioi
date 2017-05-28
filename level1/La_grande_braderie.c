#include <stdio.h>
#define repeat(nb) for (int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int   main()
{
   int   positionDepart;
   int   largeurEmplacement;
   int   nbVendeurs;
   
   scanf("%d", &positionDepart);
   scanf("%d", &largeurEmplacement);
   scanf("%d", &nbVendeurs);
   
   printf("%d\n", positionDepart);
   repeat (nbVendeurs)
   {
      printf("%d\n", positionDepart + largeurEmplacement);
      positionDepart = positionDepart + largeurEmplacement;
   }
}
