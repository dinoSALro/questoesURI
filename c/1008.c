#include <stdio.h>

int main() {
  float salary;
  int number, horas;

  scanf("%d %d %f", &number, &horas, &salary);

  float conta = salary*horas;

  printf("NUMBER = %d\n", number);
  printf("SALARY = U$ %.2f\n", conta);

  return 0;
}
