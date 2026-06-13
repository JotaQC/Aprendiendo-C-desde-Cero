## Supongamos que queremos guardar varias personas.

## Estructura

    struct Persona {
        char nombre[20];
        int edad;
    };

# Escribir varias personas

## Podemos tener:

    struct Persona personas[3] = {
        {"Ana", 20},
        {"Luis", 35},
        {"Marta", 28}
    };

## Abrimos el archivo:

    FILE *archivo;

    archivo = fopen("personas.txt", "w");

## Y guardamos todas las personas:

    for (int i = 0; i < 3; i++) {

        fprintf(archivo, "%s %d\n", personas[i].nombre, personas[i].edad);
    }

## El archivo quedará:

    Ana 20
    Luis 35
    Marta 28

# Leer varias personas

## Supongamos que tenemos ese archivo.

## Podemos leer línea por línea.

    char nombre[20];
    int edad;

## Bucle:

    while (fscanf(archivo, "%19s %d", nombre, &edad) == 2) {
        printf("%s %d\n", nombre, edad);
    }

## Qué hace el `while`?

## Primera vuelta:

    Ana 20

### Lee correctamente.

## Devuelve:

    2

## Segunda vuelta:

    Luis 35

## Devuelve:

    2

## Tercera vuelta:

    Marta 28

## Devuelve:

    2

## Final del archivo:

### Ya no hay datos.

### `fscaf()` devuelve algo distinto de `2`.

### El bucle termina.

# Leer directamente en una estructura

## Podemos hacer:

    struct Persona persona;

## Y leer así:

    while (fscanf(archivo, "%19s %d", persona.nombre, &persona.edad) == 2) {
        printf("%s %d\n", persona.nombre, persona.edad);
    }

### Esto es muy habitual.

# Contar registros

## Ejemplo:

    int contador = 0;

## Mientras leemos:

    contador++;

## Al final:

    printf("Hay %d personas\n", contador);

# Buscar una persona

## Supongamos:

    char buscado[20];

## Pedimos:

    printf("Nombre: ");
    scanf("%19s", buscado);

## Mientras leemos:

    if (strcmp(persona.nombre, buscado) == 0) {
        printf("Encontrado\n");
    }

# Concepto importante

## Esta línea:

    while (fscanf(...) == 2)

### es uno de los patrones más usados en C para leer archivos.

### No hace falta saber cuántas líneas tiene el archivo.

### El programa sigue leyendo hasta llegar al final.
