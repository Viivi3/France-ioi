#include <stdio.h>
#include <math.h>
 
int main()
{
   double taxeActuelle;
   double taxeFuture;
   double prix;
   scanf("%lf%lf%lf\n", &taxeActuelle, &taxeFuture, &prix);
     
   double nouveauPrix = prix / ( 1 + taxeActuelle / 100) * (1 + taxeFuture / 100);
   nouveauPrix = round(nouveauPrix * 100) / 100;
   printf("%lf\n", nouveauPrix);
    
   return 0;
}
