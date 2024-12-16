#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

int main() {
    Lista myList;

    nuovaLista(&myList);

    insCoda(&myList, 1);
    insCoda(&myList, 2);
    insCoda(&myList, 3);
    insTesta(&myList, 5);

    stampaLista(myList);

    printf("Elimino il nodo con valore 5\n");
    eliminaElemento(&myList, 5);

    stampaLista(myList);

    printf("Aggiungo un secondo nodo con valore 3\n");
    insCoda(&myList, 3);

    stampaLista(myList);
    
    printf("Elimino tutti i nodi con valore 3\n");
    elimTutti(&myList, 3);

    stampaLista(myList);
    
    printf("Svuoto tutta la lista\n");
    svuota(&myList);

    stampaLista(myList);

    return 0;
}
