Hasta ahora todos los arrays tenían un tamaño fijo.

Ejemplos:
    
    int numeros[5];

    char nombre[20];

El problema es que el tamaño debe conocerse al escribir el programa.

¿Y si el usuario quiere introducir 100 números?

¿O 1000?

¿O un número que no conocemos hasta que se ejecuta el programa?

Para eso existe la memoria dinámica.



Memoria automática vs dinámica:

Hasta ahora has usado variables como:

    int numero = 10;

o:

    int numeros[5];

Estas variables viven en una zona llamada stack (pila).

Cuando la función termina:

    void funcion() {
        int x = 10;
    }

x desaparece automáticamente.


La memoria dinámica vive en otra zona llamada heap.

Allí podemos reservar memoria durante la ejecución del programa.



malloc:

Para usarla:

    #include <stdlib.h>

Función:

    malloc(...)

Significa:

    Reserva memoria y devuelve su dirección.



Primer ejemplo:

    #include <stdio.h>
    #include <stdlib.h>

    int main() {
        
        int *p;

        p = malloc(sizeof(int));

        *p = 42;

        printf("%d\n", *p);

        free(p);

        return 0;
    }

Salida:
    42




¿Qué hace sizeof?

    sizeof(int)

devuelve el tamaño de un entero en bytes.

Normalmente:
    4
aunque depende del sistema.




¿Qué devuelve malloc?

    p = malloc(sizeof(int));

Podemos imaginar:

    Dirección 5000 -> espacio para un int

Entonces:
   
    p = 5000




¿Por qué usamos un puntero?

Porque malloc devuelve una dirección

Las direcciones se almacenan en punteros.



Liberar memoria:

Cuando termines:

    free(p);

Muy importante.

Si no liberas la memoria:

    memory leak

(fuga de memoria)




Array dinámico:

Reservar espacio para 5 enteros:

    int *numeros;

    numeros = malloc(5 * sizeof(int));


Ahora podemos usarlo como si fuera un array normal:

    numeros[0] = 10;
    numeros[1] = 20;
    numeros[2] = 30;
    numeros[3] = 40;
    numeros[4] = 50;


Mostrar:

    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }


Liberar:

    free(numeros);




Tamaño decidido por el usuario:

Aquí aparece la verdadera utilidad.

    int n;


Preguntamos:

    printf("¿Cuántos números quieres guardar?: ");
    scanf("%d", &n);


Reservamos:
 
    int *numeros;

    numeros = malloc(n * sizeof(int));

Ahora el tamaño depende del usuario.



Comprobar errores:

malloc puede fallar.

Por eso es buena práctica:

    if (numeros == NULL) {
        prinft("Error al reservar memoria.\n");
        return 1;
    }
    



Lo más importante de hoy:

Cuando veas:

    malloc(...)

piensa:

    "Estoy pidiendo memoria al sistema operativo."

Y cuando veas:

    free(...)

piensa:

    "Estoy devolviendo esa memoria."

