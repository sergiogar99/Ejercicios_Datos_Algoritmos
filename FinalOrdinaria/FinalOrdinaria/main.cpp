#include <iostream>
#include <time.h>
#include "data.h"
#include "tree.h"

using namespace std;

int main() {
    
    Tree tree;
    
    // Creando datos para añadir al arbol

    Node* d1 = new Node(new Data(20));
    Node* d2 = new Node(new Data(15));
    Node* d3 = new Node(new Data(80));
    Node* d4 = new Node(new Data(10));
    Node* d5 = new Node(new Data(40));
    Node* d6 = new Node(new Data(30));
    Node* d7 = new Node(new Data(160));
    Node* d8 = new Node(new Data(5));
    Node* d9 = new Node(new Data(4));


    // Añadiendo elementos al arbol
    
    tree.push(d1);
    tree.push(d2);
    tree.push(d3);
    tree.push(d4);
    tree.push(d5);
    tree.push(d6);
    tree.push(d7);
    tree.push(d8);
    tree.push(d9);

    
    // Imprimir el arbol
    
    tree.print();

    
    // Busqueda
        
    tree.search(new Node(new Data(80)));
    
    tree.search(new Node(new Data(10)));

    
    // Imprimir vector de nodos del arbol
    
    tree.printVector();

    cout << "\n\n\n";
}
