#include <stdio.h>
#define repeat(nb) for(int _loop = 1, _max = (nb); _loop <= _max; _loop++)

int   main()
{
   int   crapaud = 1337;
   
   repeat (12)
   {
      crapaud = crapaud * 2;
   }
   printf("%d\n", crapaud);
}
