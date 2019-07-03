#include "graph.h"
#include <limits>
#include <vector>

using namespace std;

Graph::Graph(Node *entryPoint):
    entryPoint{entryPoint}
{
}

void Graph::printAll()
{
    if(!entryPoint) throw string{"No entry point"};

    if(entryPoint){
        entryPoint->resetVisited();
        entryPoint->printAll();
    }

}

void Graph::link(Node *n1, Node *n2, bool twoWay)
{
    if(!n1 || !n2) throw string{"One of the nodes is invalid"};

    // insert node in the allNodes set (no worries to be repeated)
    allNodes.push_back(n1);
    allNodes.push_back(n2);

    n1->addNeighbour(n2);
    if(twoWay) n2->addNeighbour(n1);
}

void Graph::printPath(Node *dest, bool dijkstra)
{
    if(dijkstra){
        if(computeDijkstraPath(dest)){
            vector<Node*> path = getPath(dest);
            for(int i = path.size() - 1 ; i >= 0 ; i-- ){
                cout << *(path.at(i)->getData()) << " - " ;
            }
            cout << endl;
        }

    }else{
        if(computePath(dest)){
            entryPoint->printPath();
            cout << endl;
        }else {
            cout << "No Path found" << endl;
        }
    }
}

void Graph::selectStartEnd() {
    
    string startEstacion, finalEstacion;
    
    cout << "Introduzca la estación origen: "; cin >> startEstacion;

    Node* aux = new Node(new Data(startEstacion));
    
    for (int i = 0; i < allNodes.size(); i++) {
        if(allNodes.at(i)->getData()->getName() == aux->getData()->getName()) {
            setEntryPoint(allNodes.at(i));
            
            cout << "Introduzca la estación destino: "; cin >> finalEstacion;
            cout << endl << startEstacion << " a " << finalEstacion << endl;
            
            for(int j = 0; j < allNodes.size(); j++){
                if(allNodes.at(j)->getData()->getName() == finalEstacion) {
                    printPath(allNodes.at(j));
                    
                    break;
                }
            }
            break;
        }
    }
}

void Graph::setEntryPoint(Node *s)
{
    entryPoint = s;
}

bool Graph::computeDijkstraPath(Node *dest)
{
    if(!entryPoint) throw string{"No entry point"};

    entryPoint->resetVisited();
    entryPoint->setPathWeight(0);

    entryPoint->computeDijkstraPath(dest,allNodes);

    // if path found, weight must be limited
    if(dest->getPathWeight() < std::numeric_limits<float>::max())
        return true;

    return false;

}

vector<Node *> Graph::getPath(Node *dest)
{
    vector<Node*> path;
    Node* aux = dest;
    do{
        if(!aux) throw string{"This should not happen"};
        path.push_back(aux);
        aux = aux->getPrev();
    } while(aux);

    return path;
}

bool Graph::computePath(Node *dest)
{
    if(!entryPoint) throw string{"No entry point"};

    entryPoint->resetVisited();

    if(entryPoint->computePath(dest))
        return true;

    return false;

}
