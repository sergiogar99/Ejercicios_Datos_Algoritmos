#include "tree.h"
#include <iostream>
#include <vector>

using namespace std;

Tree::Tree():
    first{nullptr}
{

}

void Tree::push(Node* d)
{
    if(!first)
        first = d;
    else
        first->push(d);
}

void Tree::print() const
{
    std::cout << "\n-------- IMPRIMIENDO ARBOL --------\n";
    if(first) first->print();
}

void Tree::printVector() const
{
    std::cout << "\n-------- IMPRIMIENDO VECTOR CON NODOS ARBOL --------\n";
    if(first) first->printVector();
}

void Tree::search(Node* d) const
{
    std::cout << "\n-------- BUSQUEDA --------\n";
    if(first) first->search(d->getData()->getValue());
}

Node *Tree::getFirst() const
{
    return first;
}
