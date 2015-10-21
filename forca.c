#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () {
    char palavras[15];
    char letra;
    int x,Nletras,i;
    i = 0;
    x = 0;
    printf ("Digite sua palavra.");
    scanf ("%s", palavras);
    scanf ("%c",&letra);
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    Nletras = strlen (palavras);

    for(x=0; x<Nletras; x++) {
        printf (" _ ");
    }

    printf("Descubra a palavra\n\n");
    scanf ("%c",&letra);
    for(i=0; i<Nletras; i++) {
        if (letra == palavras[i]) {
            printf ("%c",palavras[i]);
        }

        else if (i > Nletras){
            printf ("ERRRRRROOOOOWWWWW!!!!");
        }
}
    
    return 0;
}





