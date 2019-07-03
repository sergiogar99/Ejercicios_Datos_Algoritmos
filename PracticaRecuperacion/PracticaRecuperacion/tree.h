#ifndef TREE_H
#define TREE_H

#include "list.h"
#include "nodeTree.h"
#include "data.h"

class Tree
{
    friend class List;
public:
    Tree();
    
    void push(NodeList *d);
    void listToTree(List list);
    NodeTree* search(Data *d, List list);

    NodeTree *getFirst() const;
    void depthFirstRun() const;

protected:
    NodeTree* first;
};

#endif // TREE_H
