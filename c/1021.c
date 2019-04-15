#include <stdio.h>

int main() {

float val;
int n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m5, m01;

scanf("%f", &val); 

n100 = val/100;
val = val - (100 * n100);

n50 = val/50;
val = val - (50 * n50);

n20 = val/20;
val = val - (20 * n20);

n10 = val/10;
val = val - (10 * n10);

n5 = val/5;
val = val - (5 * n5);

n2 = val/2;
val = val - (2 * n2);

m1 = val/1;
val = val - (1 * m1);

m50 = val/0.50;
val = val - (0.50 * m50);

m25 = val/0.25;
val = val - (0.25 * m25);

m10 = val/0.10;
val = val - (0.10 * m10);

m5 = val/0.05;
val = val - (0.05 * m5);

m01 = val/0.01;
val = val - (0.01 * m01);

printf("NOTAS:\n");
printf("%d nota(s) de R$ 100.00\n", n100);
printf("%d nota(s) de R$ 50.00\n", n50);
printf("%d nota(s) de R$ 20.00\n", n20);
printf("%d nota(s) de R$ 10.00\n", n10);
printf("%d nota(s) de R$ 5.00\n", n5);
printf("%d nota(s) de R$ 2.00\n", n2);
printf("MOEDAS:\n");
printf("%d moeda(s) de R$ 1.00\n", m1);
printf("%d moeda(s) de R$ 0.50\n", m50);
printf("%d moeda(s) de R$ 0.25\n", m25);
printf("%d moeda(s) de R$ 0.10\n", m10);
printf("%d moeda(s) de R$ 0.05\n", m5);
printf("%d moeda(s) de R$ 0.01\n", m01);
 
 return 0;
}