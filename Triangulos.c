#include <stdio.h>

int main(void) { 
  float ladoA;
  float ladoB;
  float ladoC;

  printf("Bienvenido al programa crack que sabe calcular los nombres de los triangulos\n");

  scanf("%f", &ladoA);
  scanf("%f", &ladoB);
  scanf("%f", &ladoC);

  if (ladoA == ladoB && ladoB == ladoC) {
     printf("Su triangulo es equilatero\n");
  } 
  else if (ladoA == ladoB && ladoB != ladoC) {
    printf("Su triangulo es isosceles\n"); 
  }
  else if (ladoA != ladoB && ladoB != ladoC) {
    printf("Su triangulo es escaleno\n");
  }

  return 0;
}