#include <iostream>
#include <vector>
#include <string>

#include "node.h"
#include "data.h"
#include "graph.h"

using namespace std;
using std::vector;

int main() {
    
    Node* n1 = new Node(new Data("Estacion1"));
    Node* n2 = new Node(new Data("Estacion2"));
    Node* n3 = new Node(new Data("Estacion3"));
    Node* n4 = new Node(new Data("Estacion4"));
    Node* n5 = new Node(new Data("Estacion5"));
    Node* n6 = new Node(new Data("Estacion6"));
    Node* n7 = new Node(new Data("Estacion7"));

    Graph graph{n1};
    
    graph.link(n1, n2, true);
    graph.link(n3, n4, true);
    graph.link(n3, n7, true);
    graph.link(n4, n5, true);
    graph.link(n5, n2, true);
    graph.link(n6, n7, true);
    
    graph.printAll();
    
    cout << endl << " --------------------- " << endl << endl;
    
    graph.selectStartEnd();
}
