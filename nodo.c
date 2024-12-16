#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"

void nuovaLista(Lista *pl){
    *pl = NULL;
}

void insTesta(Lista *pl, int r){
    Nodo *aux = malloc(sizeof(Nodo));

    if (!aux) {
        printf("Allocazione di memoria fallita!\n");
        exit(1);
    }
    
    aux->dato.valore = r;
    aux->next = *pl;
    *pl = aux;
}

void insCoda(Lista *pl, int r){
    while (*pl)
        pl = &(*pl)->next;
    insTesta(pl, r);
}

void stampaLista(Lista pl){
    while(pl){
        printf("Dato: %d, next: %p\n", pl->dato.valore, (void *)pl->next);
        pl = pl->next;
        }
    if(!pl)
        printf("Il nodo è nullo\n");
}

void elimTesta(Lista* pl) {
  if (*pl) {
    Nodo* aux = *pl;
    *pl = (*pl)->next;
    free(aux);
  }
}


Lista* ricerca(Lista* pl, int d) {
  while (*pl) {
    if ((*pl)->dato.valore == d)
      break;
    pl = &(*pl)->next;
  }
  return pl;
}

void elimTutti(Lista* pl, int d) {
  while (*pl) {
    pl = ricerca(pl, d);
    if (*pl)
      elimTesta(pl);
  }
}

void eliminaElemento(Lista *pl, int d) {
  while (*pl && (*pl)->dato.valore != d)
    pl = &(*pl)->next;
  if (*pl && (*pl)->dato.valore == d)
    elimTesta(pl);
}

void svuota(Lista *pl){
    Nodo *aux = malloc(sizeof(Nodo));
    while (*pl)
    {
        aux = *pl;
        *pl = (*pl)->next;
        free(aux);
    }
    
}