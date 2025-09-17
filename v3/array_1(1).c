/* array_1.c
 *
 * Adressierung von Array-Elementen
 * Indizes vs. Pointer
 */

// ACHTUNG: Datei enthaelt zu beseitigende Fehler!!!

#include <stdio.h>

int main(void)
{

   int i;
   int ar[5]; // Arraygröße um 1 erhöht
   ar[0] = 10;
   ar[1] = 20;
   ar[2] = 30;
   ar[3] = 40;
   // ar[4] bleibt uninitialisiert

   printf("\nar: %p\t ar[0]: %p", ar, &ar[0]);

// i) Array-Syntax
   printf("\n\nElemente von ar, indiziert inkl. Bereichsüberschreitung:\n");
   for (int i = 0; i < 6; i++) { // 5 Elemente + 1 Bereichsüberschreitung
      printf("%d\t", ar[i]);
   }

   printf("\n\nAdressen:\n");
   for (int i = 0; i < 6; i++) {
      printf("%p\t", &ar[i]);
   }
  
// ii) Pointer-Syntax
   printf("\n\nElemente von ar, referenziert inkl. Bereichsüberschreitung:\n");
   for (int i = 0; i < 6; i++) {
      printf("%d\t", *(ar + i));
      printf("%d\t", i);
   }

   printf("\n\nAdressen:\n");
   for (int i = 0; i < 6; i++) {
      printf("%p\t", (ar + i));
   }

   printf("\n\n");
   return 0;
}
