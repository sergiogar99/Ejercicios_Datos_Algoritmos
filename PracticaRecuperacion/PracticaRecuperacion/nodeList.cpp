#include "nodeList.h"

#include <string>
#include <iostream>

using namespace std;

NodeList::NodeList(Data *d):
    data{d},
    next{nullptr},
    prev{nullptr}
{
}

void NodeList::search(int d) const
{
    if(this->getData()->getValue() == d){
        cout << "\nNodo: " << this->getData()->getValue() << endl;
        
        if(prev) {
            cout << "Anterior en la lista: " << prev->data->getValue() << endl;
        } else (cout << "Anterior en la lista: NULL\n");
        if(next) {
            cout << "Siguiente en la lista: " << next->data->getValue() << endl;
        } else (cout << "Siguiente en la lista: NULL\n");
        
    }
    
    if(next) next->search(d);
}

Data *NodeList::getData() const
{
    return data;
}

void NodeList::setData(Data *value)
{
    data = value;
}

NodeList *NodeList::getNext() const
{
    return next;
}

void NodeList::setNext(NodeList *value)
{
    next = value;
}

NodeList *NodeList::getPrev() const
{
    return prev;
}

void NodeList::setPrev(NodeList *value)
{
    prev = value;
}

void NodeList::print() const
{
    data->print();
}

bool operator<(NodeList const & n1, NodeList const & n2)
{
    Data d1 = *(n1.getData());
    Data d2 = *(n2.getData());
    return ( d1 < d2 );
}

bool operator>(NodeList const & n1, NodeList const & n2)
{
    return *(n1.getData()) > *(n2.getData());
}


bool operator==(NodeList const & n1, NodeList const & n2)
{
    return *(n1.getData()) == *(n2.getData());
}


bool operator!=(NodeList const & n1, NodeList const & n2)
{
    return *(n1.getData()) != *(n2.getData());
}


bool operator<=(NodeList const & n1, NodeList const & n2)
{
    return *(n1.getData()) <= *(n2.getData());
}


bool operator>=(NodeList const & n1, NodeList const & n2)
{
    return *(n1.getData()) >= *(n2.getData());
}
