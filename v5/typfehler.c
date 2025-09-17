// typfehler.c
//
// Benutzereingaben mit Typfehler abfangen

#include <stdio.h>
#include <stdlib.h>

int main() {

  float n;
  float rvalue;

  printf("Geben Sie eine Zahl ein: ");
  rvalue = scanf("%f", &n);

  // to be debugged: (Tip: Siehe VL4 F18)
  printf("Rueckgabewert von scanf: %f\n", rvalue);

  if (rvalue == 0) {	
    printf("Sie haben keine Zahl eingegeben.\n\n");
    exit(EXIT_FAILURE);

  }

  printf("Die Zahl ist %f\n", n);
  return 0;
}
