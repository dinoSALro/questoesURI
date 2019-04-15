#include <stdio.h>


int main() {
 int horas, vm;
 float litros;
scanf("%d %d", &horas, &vm);

  litros=(horas*vm)/12.0;
  
  printf("%.3f\n", litros); 

  return 0;
}