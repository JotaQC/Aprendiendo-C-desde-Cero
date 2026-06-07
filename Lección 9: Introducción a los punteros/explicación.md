## Hasta ahora has trabajado con variables:

    int edad = 25;

## Cuando ejecutas el programa, la variable se guarda en una posición de memoria.

## Podemos imaginarlo así:

    Dirección       Valor
    ----------      ----------
    10000           25

### (La dirección real será otra, esto es solo un ejemplo.)

# Obtener la dirección de una variable:

## Ya has visto este símbolo: `&`

## Por ejemplo:

    #include <stdio.h>
    
    int main() {
        int edad = 25;
    
        printf("%p\n", &edad);
    
        return 0;
    }

## Salida (ejemplo):

    0x7ffcb4a3f8cc

### Esa es la dirección de memoria donde está guardada edad.

# ¿Qué es un puntero?

## Un puntero es una variable que guarda una dirección de memoria.

## Ejemplo:
    
    int edad = 25;
    int *p = &edad;

## Aquí: `p`

### contiene la dirección de edad.

## Podemos imaginar:

    edad = 25

    p -----> edad

# Declarar un puntero:

    int *p;

## Significa:
    
    p es un puntero a un entero.

# Guardar una dirección:

    int edad = 25;

    int *p = &edad;

## `&edad` significa:

    dirección de memoria de edad

# Mostrar el contenido del puntero:

    printf("%p\n", p);

### Muestra la dirección almacenada.

# El operador `*`:

## El símbolo `*` tiene dos usos distintos.

## Declaración:

    int *p;

## Aquí significa:

    p es un puntero.

## Acceso al valor apuntado:

    *p

## Aquí significa:

    ve a la dirección almacenada y dame el valor.

## Ejemplo:

    #include <stdio.h>
    
    int main() {
        int edad = 25;
    
        int *p = &edad;
    
        printf("%d\n", *p);
    
        return 0;
    }

## Salida:

    25

# Modificar una variable mediante un puntero:

    #include <stdio.h>
    
    int main() {
        int edad = 25;
    
        int *p = &edad;
    
        *p = 40;
    
        printf("%d\n", edad);
    
        return 0;
    }

## Salida:

    40

### Aunque hemos cambiado `*p`, en realidad hemos modificado `edad`.

## ¿Por qué `scanf` usa `&`?:

## Recuerda:

    scanf("%d", &edad);

### Ahora ya puedes entenderlo.

## `scanf` necesita saber:

    ¿Dónde debo guardar el número que introduzca el usuario?

### Por eso le pasamos la dirección de memoria.
