#include <stdio.h>
int main()
{
   int numero;
   scanf("%d", &numero);
   
   if(numero == 11)
   {
      printf("29");
   }
   else if( ( (4 <= numero) && (numero <= 6) ) || (numero == 10) )
   {
      printf("31");
   }
   else
   {
      printf("30");
    }
}
