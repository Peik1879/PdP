void swap(int *x, int *y);

void main() {
    int a = 5;
    int b = 10;
    printf("Vor dem Tausch: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("Nach dem Tausch: a = %d, b = %d\n", a, b);
    
    
}

void swap(int *x, int *y) {
    int temp = *x; // Wert von x zwischenspeichern
    *x = *y;       // Wert von y in x kopieren
    *y = temp;    // Zwischengespeicherten Wert in y kopieren
}