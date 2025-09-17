/* poly.c
 *
 * Datentyp Polygonenzug
 * als einfach verkettete Liste von Punkten
 *
 */

#include <stdio.h>
#include <stdlib.h>

// ----- Typen -----

/* Typ Point */


/* Typ Listelement nach VL 5 S.34*/


/* Typ Polygon */


// ----- Operationens -----

/* new Point at the end of Polygon */
void append(Polygon * pz, Point pnt) {
  Listelement * new = malloc(sizeof(Listelement));  // Allocate memory for new Listelement

  new->pnt = pnt;  // Let the stored point be pnt
  new->next = NULL;
  if (*pz == NULL){
    *pz = new;  // If polygonzug is empty, let it new be its first element
  } else {
    Listelement * tmp = *pz;
    Listelement * last;
    while (tmp != NULL) {  // Go to the end of the polygon.
      last = tmp;
      tmp = tmp->next;
    }
    last = tmp;
    tmp = tmp->next;
    last->next = new;  // Let new be the successor of the last element
  }
}




// ----- test application -----

int main() {

  return 0;
}
