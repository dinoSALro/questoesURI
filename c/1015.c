#include <stdio.h>
#include <math.h>

int main() {
 float x1, x2, x3, y1, y2, y3, distancia;
 
scanf("%f %f/n", &x1, &y1);
scanf("%f %f/n", &x2, &y2);
 
 x3=x2-x1;
 y3=y2-y1;
 distancia=sqrt(x3*x3+y3*y3);

  printf("%.4f\n", distancia); 

  return 0;
}