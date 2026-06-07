Crear una estructura:

struct Persona {
    char nombre[20];
    int edad;
};

Esto define un nuevo tipo de dato llamado:
    
    Persona

que contiene:

    - un nombre
    - una edad




Crear una variable de tipo estructura

    struct Persona persona1;

Ahora persona1 tiene:

    persona1.nombre
    persona1.edad



Asignar valores

    persona1.edad = 25;

Para la edad funciona así porque es un entero.

Con las cadenas todavía no podemos hacer:

    persona1.nombre = "Juan";

Eso dará error.

Por ahora usaremos scanf.



Leer datos:

#include <stdio.h>

struct Persona {
    char nombre[20];
    int edad;
};

int main() {
    struct Persona persona1;

    printf("Nombre: ");
    scanf("%19s", persona1.nombre);

    printf("Edad: ");
    scanf("%d", &persona1.edad);

    printf("Hola %s, tienes %d años.\n", person1.nombre, persona1.edad);

    return 0;
}




Acceder a los camnpos:

Usamos el operador punto:

    persona1.nombre

    persona1.edad



Inicialización directa:

También podemos crear una estructura ya inicializada:

    struct Persona persona1 = {
        "Ana",
        22
    };



Mostrar datos:

    printf("%s\n", persona1.nombre);
    printf("%d\n", persona1.edad);




Arrays de estructuras:

Esto es donde empiezan a ser realmente útiles.

Podemos almacenar varias personas:

    struct Persona personas[3];

Ahora tenemos:

    personas[0]
    personas[1]
    personas[2]

Y cada una tiene:
    
    nombre
    edad




Ejemplo:

    struct Persona personas[2] = {
        {"Ana", 20},
        {"Luís", 35}
    };


Mostrar:

    for (int i = 0; i < 2; i++) {
        printf("%s %d\n",
            personas[i].nombre,
            personas[i].edad);
    }


Salida:

    Ana 20
    Luís 35




Pasar estructuras a funciones:

Podemos hacerlo igual que con otros tipos.

    void mostrarPersona(struct Persona p) {
        printf("%s %d\n", p.nombre, p.edad);
    }

Uso:

    mostrarPersona(persona1);




Concepto importante para recordad:

Cuando accedes a una estructura:

    persona.edad

Usas el operador "."

Más adelante veremos estructuras con punteros, donde aparecerá un operador nuevo "->", pero por ahora quédate con:

    persona.nombre
    persona.edad