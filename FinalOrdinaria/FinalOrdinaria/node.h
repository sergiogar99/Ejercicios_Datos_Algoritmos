#ifndef NODE_H
#define NODE_H

#include "data.h"
#include <vector>

using namespace std;

class Node
{
    friend std::ostream & operator << (std::ostream & os, Node const &d);
    friend class Tree;

public:
    Node(Data* d);

    Data *getData() const;
    Node *getParent() const;
    Node *getOne() const;
    Node *getTwo() const;
    Node *getThree() const;
    Node *getFour() const;

    void print() const;
    
    void printVector() const;

    void search(int d) const;
        
    vector<Node*> allNodes;

protected:
    void push(Node* n);


private:
    int height;
    Data* data;
    Node* parent;
    Node* one;
    Node* two;
    Node* three;
    Node* four;

};

std::ostream & operator << (std::ostream & os, Node const &d);

#endif // NODE_H
