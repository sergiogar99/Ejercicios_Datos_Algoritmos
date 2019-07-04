#include <iostream>

#include "tree.h"
#include "nodeTree.h"
#include "list.h"
#include "nodeList.h"
#include "data.h"

using namespace std;

int main()
{
    srand(time(NULL));
    
    List list;
    Tree tree;

    list.fill10Random();
    
    cout << "\nPRACTICA RECUPERACION\n";
    cout << "\t1. Llenar lista doble con 100 int aleatorios\n";
    cout << "\t2. Lista -> Arbol Binario Ordenado\n";
    cout << "\t3. Buscar en el Arbol Binario\n";
    cout << "\t4. Imprimir por pantalla cuál es el nodo anterior y siguiente en la lista.\n";

    cout << "\n--------------\n" << endl;
    
    cout << "Nodos Lista Doble:\n";
    list.printVector();
    cout << "\n";
    
    
    cout << "\n--------------\n" << endl;
    
    cout << "Lista a Arbol...¡HECHO!\n";
    tree.listToTree(list);

    
    cout << "\n--------------\n" << endl;
    
    cout << "Nodos Arbol:\n";
    tree.depthFirstRun();

    
    cout << "\n\n--------------\n" << endl;
    
    int randToSearch = rand()%10;
    Data *d = new Data(randToSearch);
    
    cout << "Buscando el nodo " << randToSearch << " en el arbol:\n";
    if(tree.search(d, list)) {
        cout << "\tSe ha encontrado el nodo";
    } else
        cout << "\tNo se ha encontrado el nodo";

    cout << "\n\n--------------" << endl;
    
    list.search(new NodeList(new Data(randToSearch)));
    
    cout << "\n--------------\n" << endl;

    cout << "Done!\n" << endl;
}
