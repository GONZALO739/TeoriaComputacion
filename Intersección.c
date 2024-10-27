#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void complemento(char a[], int n);
void interseccion(char a[], char b[]);
void diferencia(char z[], char x[]);
char* unionAlfabetos(char alfabeto1[], char alfabeto2[]);
char* newCadena(int longitud);

int main() {
    int n = 0, i = 0, j = 0, t, o;

    printf("Por favor, elija el tamanio del primer lenguaje: ");
    scanf("%d", &i);
    char alfabeto1[i + 1]; // +1 para el carácter nulo
    getchar(); // Limpiar el buffer después de scanf

    printf("Ahora el tamanio del segundo lenguaje: ");
    scanf("%d", &j);
    char alfabeto2[j + 1]; // +1 para el carácter nulo
    getchar();

    printf("Ahora llene el primer lenguaje (ingrese caracteres): ");
    for (o = 0; o < i; o++) {
        scanf(" %c", &alfabeto1[o]);
    }
    alfabeto1[i] = '\0'; // Añadir el carácter nulo al final

    printf("Ahora llene el segundo lenguaje (ingrese caracteres): ");
    for (t = 0; t < j; t++) {
        scanf(" %c", &alfabeto2[t]);
    }
    alfabeto2[j] = '\0'; // Añadir el carácter nulo al final

    do {
        printf("\nElija la opcion de su preferencia:\n");
        printf("1.- Complemento\n2.- Diferencia\n3.- Interseccion\n4.- Union\n5.- Salir\n");
        scanf("%d", &n);

        switch (n) {
            case 1:
                printf("El complemento del alfabeto1 es: ");
                complemento(alfabeto1, 10);
                break;
            case 2:
                printf("\nLa diferencia de los dos alfabetos es: ");
                diferencia(alfabeto1, alfabeto2);
                break;
            case 3:
                printf("\nLa interseccion de los dos alfabetos es: ");
                interseccion(alfabeto1, alfabeto2);
                break;
            case 4: {
                printf("\nLa union de los dos alfabetos es: ");
                char* unionRes = unionAlfabetos(alfabeto1, alfabeto2);
                printf("%s\n", unionRes);
                free(unionRes); // Liberar la memoria asignada
                break;
            }
            case 5:
                printf("\nSaliendo\n");
                break;
            default:
                printf("Opción no válida\n");
        }
    } while (n != 5);

    return 0;
}

void complemento(char a[], int n) {
    int len = strlen(a);
    int j;
    for (j = len + 1; j <= n; j++) {
        printf("%d ", j);
    }
    printf("\n");
}

void interseccion(char a[], char b[]) {
    int i, j;
    for (i = 0; i < strlen(a); i++) {
        for (j = 0; j < strlen(b); j++) {
            if (a[i] == b[j]) {
                printf("%c ", a[i]);
            }
        }
    }
    printf("\n");
}

void diferencia(char z[], char x[]) {
    int i, j, encontrado;
    for (i = 0; i < strlen(z); i++) {
        encontrado = 0;
        for (j = 0; j < strlen(x); j++) {
            if (z[i] == x[j]) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            printf("%c ", z[i]);
        }
    }
    printf("\n");
}

char* unionAlfabetos(char alfabeto1[], char alfabeto2[]) {
    int longitud = strlen(alfabeto1) + strlen(alfabeto2) + 1;
    char* nuevaCadena = newCadena(longitud);
    strcpy(nuevaCadena, alfabeto1);
    strcat(nuevaCadena, alfabeto2);
    return nuevaCadena;
}

char* newCadena(int longitud) {
    char* cadena = (char*)malloc(sizeof(char) * longitud);
    return cadena;
}
