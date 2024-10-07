#include <stdio.h>
#include <stdlib.h>

//Vamos a ver la memoria dinámica, que tiene que ver con punteros y no con variables.
//malloc() y calloc() asignan memoria y devuelven un puntero con su dirección.
//malloc() tiene un parámetro, el tamaño, que especifica cuanta memoria queremos reservar en bytes (cuidado por si no hay suficiente).
//calloc tiene dos parámetros, la cantidad de items que queremos asignar y el tamaño de cada uno en bytes.

//Mejor dicho, malloc() asigna la memoria sin inicializarla, mientas que calloc() la inicializa, y la llena de 0.

//La mejor forma de ver cuanta memoria reservar es utilizando el sizeof.

//sizeof(*ptr1) te dirá el tamaño del dato en la dirección, mientras que sizeof(ptr1) te dirá el tamaño del puntero en sí (8 Bytes).

//Si el espacio reservado de memoria no es suficiente, se puede volver a reasignar con realloc(puntero1, tamaño), la memoria asignada en puntero1 no se reserva más y no es seguro de usar.
//Si es posible, ptr1 será igualito a ptr2, porque al estar apuntando al mismo bloque de memoria, cuando se redimensiona, el ptr1 también se redimensiona.
//Si no es posible, ptr2 será null (00000000...0) y ptr1 seguirá igual.
//Para desasignar la memoria apuntada por un puntero que ya no usemos (ptr1) usamos free(ptr1).
//Se recomienda hacer free(ptr1), y ptr1 = NULL;

//RECOMENDACIONES
//1º Ver si al asignar la memoria da NULL (hay que comprobarlo).
//2º Si no utilizamos un puntero, hacer free(ptr) e igualarlo a NULL.

/*
int main() {


    int *ptr1, *ptr2;
    ptr1 = malloc(sizeof(*ptr1));
    ptr2 = calloc(1, sizeof(*ptr2));

    //Ejemplo
    int *students;
    int numStudents = 12;
    students = calloc(numStudents, sizeof(*students));
    printf("%i\n", numStudents * sizeof(*students));

    int* ptr;
    ptr = calloc(4, sizeof(*ptr));

    *ptr = 2;
    ptr[1] = 4;
    ptr[2] = 5;
    ptr[3] = 6;

    printf("%i\n%i\n%i\n%i\n%i\n", ptr[0], *ptr, ptr[1], ptr[2], ptr[3]);

    int* ptr2 = malloc(4);
    char* ptr3 = (char*) ptr2;
    *ptr2 = 1684234849;

    printf("%d is %c %c %c %c", *ptr2, ptr3[0], ptr3[1], ptr3[2], ptr3[3]);





    int *ptr1, *ptr2, tamaño;

    tamaño = 4 * sizeof(*ptr1);
    ptr1 = malloc(tamaño);
    printf("%d bytes allocated at address %p \n", tamaño, ptr1);

    tamaño = 199949838435;
    ptr2 = realloc(ptr1, tamaño);
    printf("%d bytes allocated at address %p \n", tamaño, ptr2);
    printf("%d bytes allocated at address %p \n", tamaño, ptr1);
    free(ptr1);





    return 0;
}
*/