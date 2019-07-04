#ifndef NODETREE_H
#define NODETREE_H

#include "data.h"
#include "nodeList.h"

class NodeTree
{

    friend bool operator == (NodeTree const &n1, NodeTree const &n2 );
    friend bool operator >= (NodeTree const &n1, NodeTree const &n2 );
    friend bool operator <= (NodeTree const &n1, NodeTree const &n2 );
    friend bool operator > (NodeTree const &n1, NodeTree const &n2 );
    friend bool operator < (NodeTree const &n1, NodeTree const &n2 );
//    friend std::ostream & operator << (std::ostream & os, NodeTree const &d);
    friend class Tree;

public:
    NodeTree(NodeList* d);

    NodeList *getData() const;
    NodeTree *getLeft() const;
    NodeTree *getParent() const;
    NodeTree *getRight() const;

    void depthFirstRun() const;

protected:
    void push(NodeTree* n);

private:
    NodeList* data;
    NodeTree* parent;
    NodeTree* left;
    NodeTree* right;
};

bool operator == ( NodeTree const &n1, NodeTree const &n2 );
bool operator >= ( NodeTree const &n1, NodeTree const &n2 );
bool operator <= ( NodeTree const &n1, NodeTree const &n2 );
bool operator >  ( NodeTree const &n1, NodeTree const &n2 );
bool operator <  ( NodeTree const &n1, NodeTree const &n2 );

//std::ostream & operator << (std::ostream & os, NodeTree const &d);

#endif // NODETREE_H
