#include <stdio.h>

int main()
{
   int borne1, borne2;
   
   scanf("%d %d", &borne1, &borne2);
   int ecart = borne2 - borne1;
   if (ecart < 0)
   {
      ecart = -ecart;
   }
   printf("%d\n", ecart);
}
