#include "tree.h"

Tree::Tree():
    first{nullptr}
{

}

void Tree::push(NodeList* d)
{
    NodeTree* n = new NodeTree(d);
    if(!first)
        first = n;
    else
        first->push(n);
}

void Tree::listToTree(List list)
{
    for(int i = 0; i < list.allNodes.size(); i++) {
        push(list.allNodes.at(i));
    }
}

NodeTree *Tree::search(Data *d, List list)
{
    NodeTree* it = first;

    while(it){
        if( *(it->getData()->getData()) == d) {
            return(it);
        }
        else if( *(it->data->getData()) > d) it = it->left;
        else if( *(it->data->getData()) < d) it = it->right;
    }
    return nullptr;
}

NodeTree *Tree::getFirst() const
{
    return first;
}

void Tree::depthFirstRun() const
{
    if(first) first->depthFirstRun();
}


