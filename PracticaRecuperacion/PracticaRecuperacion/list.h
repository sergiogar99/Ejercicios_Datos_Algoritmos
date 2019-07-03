#ifndef LIST_H
#define LIST_H

#include "nodeList.h"
#include "data.h"

#include <iostream>
#include <vector>

using namespace std;

class List
{
public:
    List();

    void push_back(Data* d);
    void fill10Random();
    
    void search(NodeList *d) const;

    void printVector() const;
    
    NodeList *getFirst() const;
    void setFirst(NodeList *value);

    NodeList *getLast() const;
    void setLast(NodeList *value);

    unsigned int getSize() const;
    void setSize(unsigned int value);
    
    vector <NodeList*>allNodes;

private:
    NodeList* first;
    NodeList *last;
    unsigned int size;
};

ostream & operator<<(ostream & os, List const &  l);

#endif // LIST_H
