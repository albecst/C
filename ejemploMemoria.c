#include <stdio.h>
#include <stdlib.h>
/*
//Vamos a realizar un programa que pueda hacer una lista de cualquier longitud, mediante la memoria dinámica.
//Si se queda sin espacio, con la función addToList podrá agrandarse 10 posiciones más.

struct lista {
    int* ptr; //Apunta a la posición de memoria donde los items de las listas van a estar almacenados.
    int items; //Cuántos items hay en la lista.
    int tamaño; //Cuántos items queremos meter en la posición de memoria.
};

void addToList(struct lista *miLista, int item) {
    // Si la lista está llena, la hace más grande para que quepan 10 elementos más
    if (miLista->items == miLista->tamaño) {
        miLista->tamaño += 10;
        miLista->ptr = realloc(miLista->ptr, miLista->tamaño * sizeof(int));
    }

    // Añade el nuevo ítem al final de la lista
    miLista->ptr[miLista->items] = item;
    miLista->items++;
}


int main() {
    struct lista miLista;
    int cantidad;

    miLista.tamaño = 10;
    miLista.items = 0;
    miLista.ptr = malloc(miLista.tamaño * sizeof(int));

    //Vamos a comprobar que ha sido capaz
    if (miLista.ptr == NULL) {
        printf("Error al asignar la memoria");
        return 1; //Código de escape error
    }

    //Añadimos cuantos items queramos a la lista
    cantidad = 10;
    for (int i = 0;i<cantidad;i++) {
        addToList(&miLista, i + 1);
    }

    // Display the contents of the list
    for (int j = 0; j < miLista.items; j++) {
        printf("%d ", miLista.ptr[j]);
    }

    // Free the memory when it is no longer needed
    free(miLista.ptr);
    miLista.ptr = NULL;

    return 0;
}

*/