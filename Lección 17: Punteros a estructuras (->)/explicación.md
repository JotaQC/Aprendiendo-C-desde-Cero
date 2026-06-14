## Ya has visto prácticamente todos los bloques fundamentales de C. Vamos a aprender ahora algo que se usa muchísimo junto con estructuras y archivos.

## Hasta ahora accedías a una estructura así:

    struct Persona p;

    p.edad = 20;

### porque `p` es una variable normal.

# Recordatorio:

    struct Persona {
        char nombre[20];
        int edad;
    }

## Variable normal:

    struct Persona p;

## Acceso:

    p.edad = 20;

    printf("%d\n", p.edad);

# Puntero a estructura

## También podemos tener:

    struct Persona *ptr;

### Ahora `ptr` no es una estructura.

### Es un puntero que apunta a una estructura.

## Ejemplo:

    struct Persona p;

    struct Persona *ptr = &p;

## Visualmente:

    ptr ----> p

# Acceso usando `*`

## Podríamos escribir:

    (*ptr).edad = 20;

### Fíjate en los paréntesis.

## Sin ellos:

    *ptr.edad

### Significaría otra cosa.

# Operador `->`

## Como lo anterior resulta incómodo, C tiene una abreviatura:

    ptr->edad = 20;

## equivale a:

    (*ptr).edad = 20;

## Ejemplo completo:

    #include <stdio.h>

    struct Persona {
        char nombre[20];
        int edad;
    };

    int main() {

        struct Persona p = {"Ana", 20};

        struct Persona *ptr = &p;

        printf("%s\n", ptr->nombre);
        printf("%d\n", ptr->edad);

        return 0;
    }

## Salida:

    Ana
    20

# Modificar la estructura

    ptr->edad = 30;

## Después:

    printf("%d\n", p.edad);

## Salida:

    30

### Porque `ptr` apunta a `p`.

# Pasar estructuras por referencia

## Hasta ahora hiciste:

    void mostrarPersona(struct Persona p)

### Eso copia toda la estructura.

## Muchas veces es mejor:

    void mostrarPersona(struct Persona *p)

## Entonces:

    printf("%s\n", p->nombre);

## Y la llamada:

    mostrarPersona(&persona);

# Modificar desde una función

    void cumplirAnios(struct Persona *p) {
        p->edad++;
    }

## Uso:

    cumplirAnios(&persona);

### La edad cambia en la estructura original.

# Concepto importante

## Cuando veas:

    .

## piensa:

    "Tengo la estructura."

## Cuando veas:

    ->

## piensa:

    "Tengo un puntero a la estructura."

### Esa diferencia aparece constantemente en programas reales escritos en C.