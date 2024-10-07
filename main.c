#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include <math.h>

//sisisisi

/*

//FUNCIONES
void saludar(char nombre[]) {
    printf("Holaaaa %s\n", nombre);
}

void sumaaaa(int x, int y) {
    printf("%d + %d = %d\n", x, y, x+y);
}

void imprimirArray(int array[], int longitud) {
    for (int i = 0; i < longitud; i++) {
        printf("%d\n", array[i]);
    }
}

float aCelsius(float fahrenheit) {
    return (5.0 / 9.0) * (fahrenheit - 32.0);
}

//RECURSIVIDAD
int suma(int k) {
    if (k>0) {
        return k + suma(k-1);
    }
    else {
        return 0;
    }
}

int factorial(int k) {
    if (k>=0) {
        if (k==0 || k==1) {
            return 1;
        }
        else {
            return k*factorial(k-1);
        }
    }
    else {
        return -1;
    }
}

int main() {
/*
    const float PI = 3.14;
    int items = 50;
    float cost_per_item = 9.99;
    float total_cost = items * cost_per_item;
    char currency = '$';

    printf("El precio total es %.2f %c \n", total_cost, currency);

    float sum = (float) 5 / 2;
    float sum2 = 5.0/2;
    printf("El total es %.1f\n", sum);
    printf("El total es %f\n", sum2);
    printf("El numero pi vale %.2f\n", PI);

    bool si = true;

    printf("%d\n", si);
    printf("%d\n", 5<2);

    int i = 10234;
    if (i == 4) {
        printf("Hola");
    }
    else if (i == 3) {
        printf("Viva España");
    }
    else {
        printf("Si");
    }

    printf("\n");


    int tiempo = 20;
    (tiempo < 18) ? printf("Rico") : printf("Señor R\n");

    int codigo = 1920;
    (codigo == 1920) ? printf("Has abierto la puerta\n") : printf("Incorrecto");

    int secreto = 23;
    switch (secreto) {
        case 20:
            printf("Hola");
            break;
        case 21:
            printf("Viva");
            break;
        case 22:
            printf("ESPAÑITAAAAAAA");
            break;
        default:
            printf("No encuentro el nº\n");
    }

    int hola = 1;
    while (hola <= 5) {
        printf("Vamos por el numero: %i\n", hola);
        hola++;
    }

    int adios = 1;
    do {
        printf("sisisisi do while\n");
        adios++;
    }
    while(adios < 5);



    int numeros = 12345;

    while (numeros > 0) {
        printf("%i\n", numeros);
        numeros /= 2;
    }
    printf("\n");

    for (i = 0; i <= 10; i++) {
        if (i == 0) {
            continue;
        }
        if (i % 2 == 0) {
            printf("Numero par: %i\n", i);
        }
        else {
            printf("Numero impar: %i\n", i);
        }
    }

    int f;

    for (f = 0; f < 10; f++) {
        if (f == 4) {
            break;
        }
        printf("%d\n", f);
    }




    int numeross[] = {10,20,30,40,50};
    printf("%i\n", numeross[0]);

    for (int i = 0; i <= 4; i++) {
        printf("Numero: %d\n", numeross[i]);
    }

    // An array storing different ages
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg, summ = 0;
    int g;

    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    // Loop through the elements of the array
    for (g = 0; g < length; g++) {
        summ += ages[g];
    }

    // Calculate the average by dividing the sum by the length
    avg = summ / length;

    // Print the average
    printf("The average age is: %.2f\n", avg);


    int array[2][3] = {{1,2,3}, {4,5,6}};
    printf("%i\n", array[1][0]);
    array[0][0] = 33;
    printf("%i\n", array[0][0]);


    //NO EXISTE EL TIPO STRING, hay que tomarlo como un array de caracteres
    char gracias[] = "Graciaaaas";
    printf("%s", gracias);

    char message[] = "\nGood to see you,";
    char fname[] = "John";
    int coco = 333;
    int pepe = 444;
    printf("%s %s %i %i\n", message, fname, coco, pepe);

    printf("%i\n", strlen(gracias));
    printf("%i\n", sizeof(gracias)); //Incluye \0 el caracter de escape, por eso es más grande el valor.




    // Create an int and a char array
    int myNum;
    char myChar[10]; //Hay que especificar el tamaño obligatoriamente

    // Ask the user to type a number AND a string
    printf("Type a number AND a character and press enter: \n");

    // Get and save the number AND string the user types
    scanf("%d %s", &myNum, &myChar);

    // Print the number
    printf("Your number is: %d\n", myNum);

    // Print the string
    printf("Your string is: %s\n", myChar);


    //USER INPUT
    int numerico;

    printf("Pon un numerico: \n");
    scanf("%i", &numerico);
    printf("Tu numerico es: %i\n", numerico);



    //DIRECCIONES DE MEMORIA
    int numerito;
    printf("Ese numerito está en la posición de memoria: %p\n", &numerito);


    //PUNTEROS
    int edad = 19;
    int* ptr = &edad;

    printf("%p\n", ptr); //Para saber la dirección de memoria apuntada por el puntero
    printf("%i\n", *ptr); //Para saber el valor de lo que está apuntando el puntero
    //Cuando ponemos * al declarar la variable creamos una variable puntero
    //Cuando no lo usamos al declarar la variable, funciona como un desreferenciador.

    int numericos[4] = {1, 2, 3, 4};

    for (int i = 0;i<4;i++) {
        printf("%i\n", numericos[i]);
    }

    for (int i = 0;i<4;i++) {
        printf("%p\n", &numericos[i]);
    }


    //FUNCIONES
    saludar("Paquita");
    saludar("Liam");

    suma(15,20);

    int arraypotente[5] = {15, 20, 25, 256789, 200000};
    imprimirArray(arraypotente,  5);

    int gradosFarenheit = 105;
    float gradosCelsius  = aCelsius(gradosFarenheit);
    printf("Los grados en Farenheit son: %i, y tras convertirlos a Celsius son: %f",gradosFarenheit,gradosCelsius);




    int resultado = suma(10);
    printf("Resultado = %i\n", resultado);

    int numero;
    printf("Introduce un numero para calcular su factorial:");
    scanf("%i", &numero);

    if (numero>=0) {
        int resultado2 = factorial(numero);
        printf("El resultado es: %i\n", resultado2);
    }
    else {
        printf("No se puede calcular el factorial de un numero negativo");
    }

    return 0;

}

*/