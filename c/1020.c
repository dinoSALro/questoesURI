#include <stdio.h>

int main() {

int dia, mes, ano, num;

scanf("%d", &num); 

ano = num/365;
num =num%365;
mes = num/30;
dia = num%30;


printf("%d ano(s)\n", ano);
printf("%d mes(es)\n", mes);
printf("%d dia(s)\n", ano); 

 
 return 0;
}