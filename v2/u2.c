#include <stdio.h>

int y;

float f(int x, int z);
int main() {
    printf("Hallo, Welt!\n");
    int x = 4;
    printf("Geben Sie eine ganze Zahl ein: ");
    scanf("%i", &y);
    if (y == 0) {
        printf("Fehler: Division durch Null ist nicht erlaubt.\n");
        return 1; // Fehlercode zurückgeben
    }
    float h = f(x, y);
    printf("h: %f\n", h);
    return 0;
}

float f(int x, int z) {
    float lsg = (2.0f * (x * x)) / z;
    return lsg;
}