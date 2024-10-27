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
