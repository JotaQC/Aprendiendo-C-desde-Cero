Hasta ahora los datos estaban escritos dentro del programa.

Ahora vamos a pedirlos al usuario.

Ejemplo:

#include <stdio.h>

int main(){
    int edad;

    printf("Introduce tu edad: ");
    scanf("%d", &edad);

    printf("Tienes %d años\n", edad);

    return 0;
}

¿Qué hace scanf?

scanf("%d", &edad);

Lee un entero introducido por teclado y lo guarda en la variable edad.

Importante: el símbolo &

&edad

Significa:
"la dirección de memoria donde está la variable".

Por ahora memoriza esta regla:
- Con scanf para int y float se usa &.
- Más adelante aprenderas exactamente por qué.

Leer varios datos:

#include <stdio.h>

int main() {
    int edad;
    float altura;

    printf("Edad: ");
    scanf("%d", &edad);

    printf("Altura: ");
    scanf("%d", &altura);

    printf("Edad = %d\n", edad);
    printf("Altura= %.2f\n", altura);

    return 0;
}

Ejemplo de ejecución:

Edad: 30
Altura: 1.78

Edad = 30
Altura = 1.78

-----

Operaciones matemáticas:

int a = 10;
int b = 3;

Suma:

a + b

Resultado: 13

Resta:

a - b

Resultado: 7

Multiplicación:

a * b

Resultado: 30

División:

a / b

Resultado: 3

- Atención:

Como a y b son enteros, C descarta la parte decimal.

10 / 3 produce 3 no 3.333333.