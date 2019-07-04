#ifndef TREE_H
#define TREE_H

#include "node.h"
#include "data.h"
#include <vector>

using namespace std;

class Tree
{
public:
    Tree();

    Node *getFirst() const;
    
    void push(Node *d);

    void print() const;

    void printVector() const;
    
    void search(Node *d) const;
    
protected:
    Node* first;
};

#endif // TREE_H
