#include <stdio.h>
#define zn printf("\n")

int main(int argc, char *argv[]) {
    int ar[3][4] = { {0,1,2,3},{10,11,12}};
    for(int i = 0; i < 2; i++) {
        printf("Zeile %d: ", i);
        for(int j = 0; j < 4; j++) {
            if (i == 1 && j > 2) {
                // Feld nicht initialisiert, nichts ausgeben
                continue;
            }
            if (ar[i][j] != 0 || (i == 0 && j == 0)) {
                printf("%d ", ar[i][j]);
            }
        }
        zn;
    }
    return 0;
}