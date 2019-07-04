#include "nodeTree.h"
#include <iostream>

using namespace std;

NodeTree::NodeTree(NodeList *d):
    data{d},
    parent{nullptr},
    left{nullptr},
    right{nullptr}
{

}

void NodeTree::push(NodeTree *n)
{
    if( n->getData()->getData()->getValue() > this->getData()->getData()->getValue()){
        if(right)
            right->push(n);
        else{
            right = n;
            n->parent = this;
        }
    }else{
        if(left)
            left->push(n);
        else{
            left = n;
            n->parent = this;
        }
    }
}

NodeTree *NodeTree::getRight() const
{
    return right;
}

void NodeTree::depthFirstRun() const
{
    cout << this->getData()->getData()->getValue() << " - ";
    if(left) left->depthFirstRun();
    if(right) right->depthFirstRun();

}

NodeTree *NodeTree::getParent() const
{
    return parent;
}

NodeTree *NodeTree::getLeft() const
{
    return left;
}

NodeList *NodeTree::getData() const
{
    return data;
}

bool operator ==(const NodeTree &n1, const NodeTree &n2)
{
    return ( *(n1.data->getData()) == *(n2.data->getData()));
}

bool operator <=(const NodeTree &n1, const NodeTree &n2)
{
    return ( *(n1.data->getData()) <= *(n2.data->getData()));
}

bool operator >=(const NodeTree &n1, const NodeTree &n2)
{
    return ( *(n1.data->getData()) >= *(n2.data->getData()));
}

bool operator >(const NodeTree &n1, const NodeTree &n2)
{
    return ( *(n1.data->getData()) > *(n2.data->getData()));
}

bool operator <(const NodeTree &n1, const NodeTree &n2)
{
    return ( *(n1.data->getData()) < *(n2.data->getData()));
}

//std::ostream &operator <<(std::ostream &os, const NodeTree &d)
//{
//    os << *(d.data);
//    return os;
//}
