#ifndef NODELIST_H
#define NODELIST_H

#include "data.h"

class NodeList
{
public:
    NodeList(Data* d);

    void search(int d) const;

    Data *getData() const;
    void setData(Data *value);

    NodeList *getNext() const;
    void setNext(NodeList *value);

    NodeList *getPrev() const;
    void setPrev(NodeList *value);

    void print() const;
        
private:
    Data *data;
    NodeList* next;
    NodeList* prev;
};

bool operator <  (NodeList const & n1, NodeList const & n2);
bool operator >  (NodeList const & n1, NodeList const & n2);
bool operator == (NodeList const & n1, NodeList const & n2);
bool operator <= (NodeList const & n1, NodeList const & n2);
bool operator >= (NodeList const & n1, NodeList const & n2);
bool operator != (NodeList const & n1, NodeList const & n2);

#endif // NODELIST_H
