#include <stdarg.h>
#include <stdio.h>

// funcao variadica
float vf_avg(int count, ...);

// funcao comum
float cf_avg(float a, float b, float c, float d);

int main(void) {
  float nota1 = 7.5;
  float nota2 = 9.8;
  float nota3 = 8.3;
  float nota4 = 8.6;

  float avg;

  // calculo direto...
  avg = (nota1 + nota2 + nota3 + nota4) / 4;

  puts("============");
  printf("Bim. 1: %.1f\n", nota1);
  printf("Bim. 2: %.1f\n", nota2);
  printf("Bim. 3: %.1f\n", nota3);
  printf("Bim. 4: %.1f\n", nota4);
  puts("------------");
  printf("Média : %.1f\n", avg);
  puts("============");

  return 0;
}

float cf_avg(float a, float b, float c, float d) { return (a + b + c + d) / 4; }

float vf_avg(int count, ...) {
  va_list args;
  va_start(args, count);

  float total = 0;
  for (int i = 0; i < count; i++)
    total += va_arg(args, double);

  va_end(args);
  return total / count;
}
