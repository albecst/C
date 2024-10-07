#include <stdio.h>
#include <string.h>

//1. Almacenar datos de un estudiante
//Lo voy a realizar con un struct, así practico con las estructuras

/*
struct estudiante {
    int id;
    int edad;
    double media;
    char nombre[20];
};

int main() {
    struct estudiante es1;
    es1.id = 0;
    es1.media = 9.1;
    es1.edad = 19;
    strcpy(es1.nombre, "Benito Antonio Martinez Ocasio");

    printf("Id: %i\nNombre: %s\nMedia: %.2f\nEdad: %i\n", es1.id, es1.nombre, es1.media, es1.edad);

    return 0;
}



//2. Calcular el porcentaje de la puntuación de un usuario en relación con la máxima puntuación del juego

int main() {
    int max = 100;

    int puntos = 69;

    float porcentaje = (float) puntos/max * 100;

    printf("Porcentaje: %.2f%\n", porcentaje);

    return 0;
}

*/

//3. Ver si una persona es lo suficientemente mayor para votar, pidiendo al usuario la edad, con todas las comprobaciones necesarias.

int main() {
    int edad;
comenzar:
    printf("Introduce una edad y te diremos si es lo suficientemente mayor para votar:");
    scanf("%i", &edad); //Un entero, donde.
    if (edad < 0) {
        printf("Introduce una edad entre 1 o 100.\n");
        goto comenzar;
    }
    else if (0 > edad || edad < 17) {
        printf("No tiene la edad necesaria para votar, en España es necesario tener al menos 18 años, y esa persona tiene %i años.\n", edad);
    }
    else {
        printf("Al tener %i años, puede votar.", edad);
    }
}