#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Fehler: Bitte genau einen Parameter angeben!\n");
        return 1;
    }
    double zahl = atof(argv[1]);
    double kubik = zahl * zahl * zahl;
    printf("Kubikzahl: %f\n", kubik);
    return 0;
}