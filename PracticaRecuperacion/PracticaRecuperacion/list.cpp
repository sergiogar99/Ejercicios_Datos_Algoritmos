#include "list.h"

List::List():
    first{nullptr},
    last{nullptr},
    size{0}
{

}

void List::push_back(Data *d)
{
    NodeList* n = new NodeList(d);

    if(last){
        last->setNext(n);
        n->setPrev(last);
        last = n;
    }else{ // empty list
        last = n;
        first = n;
    }
    
    allNodes.push_back(n);
    size++;
}

void List::fill10Random()
{
    for(int i = 0; i < 10; i++) {
        int data = rand() % 10;
        Data* d = new Data(data);
        
        push_back(d);
    }
}

void List::search(NodeList* d) const
{
    if(first) first->search(d->getData()->getValue());
}

void List::printVector() const
{
    for (int i = 0; i < allNodes.size(); i++) {
        cout << allNodes.at(i)->getData()->getValue() << " - ";
    }
}

NodeList *List::getFirst() const
{
    return first;
}

void List::setFirst(NodeList *value)
{
    first = value;
}

NodeList *List::getLast() const
{
    return last;
}

void List::setLast(NodeList *value)
{
    last = value;
}

unsigned int List::getSize() const
{
    return size;
}

void List::setSize(unsigned int value)
{
    size = value;
}

ostream & operator<<(ostream &os, const List &l)
{
    for(NodeList* it = l.getFirst(); it != nullptr; it = it->getNext()){
        os << it->getData()->getValue() << " - ";
}

    return os;

}
