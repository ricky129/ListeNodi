typedef struct 
{
    int valore;
} Dato;


typedef struct nodo
{
    Dato dato;
    struct nodo *next;
} Nodo;

typedef Nodo *Lista;

void nuovaLista(Lista *pl);
void insCoda(Lista *pl, int r);
void insTesta(Lista *pl, int r);
void stampaLista(Lista pl);
void elimTesta(Lista* pl);
Lista* ricerca(Lista* pl, int d);
void elimTutti(Lista* pl, int d);
void eliminaElemento(Lista *pl, int d);
void svuota(Lista *pl);