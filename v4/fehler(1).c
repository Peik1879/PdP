/* fehler.c
 *  
 *  Ein Programm, dass Compilerfehler,
 *  Laufzeitfehler und logische Fehler demonstriert.
 */

#include <stdio.h>

int main() {

  int num1, num2, help;
  num1 = 2;
  num2 = 1;
  printf("Der Quotient der Variablen ist: ");
  int lsg = num1 / num2; // Division durch Null (Laufzeitfehler!!!)
  printf("%d\n", lsg);
  printf("\n");		   // Leerzeile

  printf("Jetzt werden die Variablenwerte vertauscht.\n");


    help = num2;
    num2 = num1;
    num1 = help;

  printf("Der Quotient der Vaiablen ist nun: ");
  printf("%d\n", num1/num2);

  return 0;
}