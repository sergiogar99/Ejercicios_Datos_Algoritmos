#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include "node.h"

// OBTIENE EL NODO QUE ESTA EN EL MEDIO, A PARTIR DE EL TAMAÑO DE LA LISTA Y EL NODO FIRST
Node* getMiddleNode(Node* first, int size);

// BUSQUEDA DICOTOMICA
Node *search(Node *first, Node *last, int dato, int size);

Node *busqueda(Node*firt,Node *last,int dato);


Node *findFirst(Node* first,int dato);
Node *findLast(Node* last, int dato);

#endif // FUNCTIONS_H
