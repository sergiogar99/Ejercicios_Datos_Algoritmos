#ifndef GRAPH_H
#define GRAPH_H

#include "node.h"
#include <set>
#include <vector>

using namespace std;

class Graph
{
public:
    Graph(Node* entryPoint = nullptr);
    void printAll();
    void link(Node* n1, Node* n2, bool twoWay = false);
    void printPath(Node* dest, bool dijkstra = true);
    
    void selectStartEnd();

    void setEntryPoint(Node *s);

    bool computeDijkstraPath(Node* dest);

    vector<Node*> getPath(Node* dest);

    vector<Node*> allNodes;

private:
    Node* entryPoint;
    bool computePath(Node* dest);

};

#endif // GRAPH_H
