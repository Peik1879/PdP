#include <stdio.h>
#define SIZE 10

void rev_print(int *p){
    for(int i = SIZE - 1; i >= 0; i--){
        printf("%d ", p[i]);
    }
}
int main(int argc, char *argv[]){
    int ar[SIZE];
    for(int i = 0; i < SIZE; i++){
         ar[i]= i*i;
    }
    printf("Array-Inhalt:\n");
    for(int i = 0; i < SIZE; i++){
         printf("%d ", ar[i]);
    }
    rev_print(ar);
    return 0;
}