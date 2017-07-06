#include <stdio.h>

int main()
{
   int   nbZones;
   scanf("%d\n", &nbZones);
   printf("%d\n", ((nbZones % 24) + 24 ) % 24);
}
