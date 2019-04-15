#include <stdio.h>

int main() {

int A, B, C, D, somaCD, somaAB, modA;

scanf("%d %d %d %d", &A, &B, &C, &D); 

somaAB = A + B;
somaCD = C + D;
modA = A%2;

if ( B>C && D>A && somaCD>somaAB && C>=0 && D>=0 && modA == 0)
{
printf("Valores aceitos\n");
} else {
printf("Valores nao aceitos\n");
}

 
 return 0;
}