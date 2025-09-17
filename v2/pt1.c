void main(){
    int i;
    int *ptr;
    ptr = &i;
    i = 1;
    printf("Wert von ptr (Adresse): %p\n", (void*)ptr);
    printf("Wert des Speicherobjekts, auf das ptr zeigt (*ptr): %d\n", *ptr);
    printf("Wert von i: %d\n", i);

}