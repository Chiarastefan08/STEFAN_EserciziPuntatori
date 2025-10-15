#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    printf("Inserisci una stringa per sapere se è palindorma o no");
    int *stringa = (int *)malloc(sizeof(int)*20);
    scanf("%s", stringa);
    int lunghezza = strlen(stringa);
    stringa = realloc(stringa, sizeof(int)*lunghezza);
    char *inizio = stringa;
    char *finale = stringa;

    while (*finale != '\0') {
        finale++;
    }
    finale--;
    while (inizio <= finale) {
        while (*inizio == ' ') {
            inizio++;
        }
        while (*finale == ' ') {
            finale--;
        }
        if (*inizio != *finale) {
            printf("la frase non è palindroma");
            return 0;
        }
        inizio++;
        finale--;
    }
    printf("frase palindroma");
    return 0;



}
