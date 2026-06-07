# Para trabajar con archivos:

    #include <stdio.h>

### No hace falta ninguna biblioteca extra.

# ¿Qué es `FILE`?

## Un archivo se representa mediante un puntero:

    FILE *archivo;

### Piensa en él como un "manejador" que permite acceder a un archivo del disco.

# Abrir un archivo:

## Usamos:

    fopen()

## Ejemplo:

    FILE *archivo;

    archivo = fopen("datos.txt", "w");

# Modos de apertura:

## Escritura:

    "w"

### Crea el archivo si no existe. Si existe, borra su contenido anterior.

## Lectura:

    "r"

### Abre un archivo existente para leer. Si no existe, falla.

## Añadir al final:

    "a"

### Abre el archivo y escribe al final sin borrar lo anterior.

# Comprobar errores:

## Siempre:

    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return 1;
    }

# Escribir en un archivo:

## Se usa:

    fprintf()

### Funciona parecido a `printf()`.

## Ejemplo:

    #include <stdio.h>

    int main() {
        
        FILE *archivo;

        archivo = fopen("datos.txt", "w");

        if (archivo == NULL) {
            printf("Error.\n");
            return 1;
        }

        fprintf(archivo, "Hola mundo\n");

        fclose(archivo);

        return 0;
    }

## Resultado:

### Se crea:

    datos.txt

### con contenido:

    Hola mundo

# Cerrar un archivo:

## Siempre:

    fclose(archivo);

### Cuando termines.

# Leer de un archivo:

## Usamos:

    fscanf()

## Ejemplo:

### Si `datos.txt` contiene:

    Ana 25

### podemos leer:

    char nombre[20];
    int dead;

    fscanf(archivo, "%19s %d", nombre, &edad);

## Programa completo:

    #include <stdio.h>

    int main() {

        FILE *archivo;

        char nombre[20];
        int edad;

        archivo = fopen("datos.txt", "r");

        if (archivo == NULL) {
            printf("Error.\n");
            return 1;
        }

        fscanf(archivo, "%19s %d", nombre, &edad);

        printf("%s %d\n", nombre, edad);

        fclose(archivo);

        return 0;
    }

# Guardar varias líneas:

    fprintf(archivo, "Ana 20\n");
    fprintf(archivo, "Luis 35\n");
    fprintf(archivo, "Marta 28\n");

# Leer varias líneas:

## Con un bucle:

    while (fscanf(archivo, "%19s %d", nombre, &edad) == 2) {
        printf("%s %d\n", nombre, edad);
    }

# ¿Por qué `== 2`?

## Porque esperamos leer:

    %19s
    %d

## es decir:

    - 1 cadena
    - 1 entero

## Total:

    2 elementos


# Concepto importante:

## Hay tres funciones que debes recordar:

    fopen()

### Abrir.

    fprintf()

### Escribir.

    fclose()

### Cerrar.

### Y para leer:

    fscanf()

### Cuando domines estas cuatro funciones, ya podrás crear programas que almacenen información de forma permanente.