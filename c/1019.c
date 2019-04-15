#include <stdio.h>

int main() {

int seg, min, hora, num;

scanf("%d", &num); 

seg = num%60;
min = (num/60)%60;
hora = (num/60)/60;

printf("%d:%d:%d\n", hora, min, seg);
 
  return 0;
}