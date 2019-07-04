#include "node.h"
#include <iostream>
#include <vector>

using namespace std;

Node::Node(Data *d):
    data{d},
    parent{nullptr},
    one{nullptr},
    two{nullptr},
    three{nullptr},
    four{nullptr}
{

}

void Node::push(Node *n)
{
    if( n->getData()->getValue() % this->getData()->getValue() == 0 || n->getData()->getValue() == this->getData()->getValue() ){
        if(one)
            one->push(n);
        else{
            one = n;
            n->parent = this;
            allNodes.push_back(n);
        }
        return;
    }

    if( this->getData()->getValue() % n->getData()->getValue() == 0){
        if(two)
            two->push(n);
        else{
            two = n;
            n->parent = this;
            allNodes.push_back(n);
        }
        return;
    }
    
    if( n->getData()->getValue() % 2 == 0){
        if(three)
            three->push(n);
        else{
            three = n;
            n->parent = this;
            allNodes.push_back(n);
        }
        return;
    }
    
    if( n->getData()->getValue() % 2 != 0 ){
        if(four)
            four->push(n);
        else{
            four = n;
            n->parent = this;
            allNodes.push_back(n);
        }
        return;
    }

}

void Node::print() const
{
    cout << *(this) << endl;
    if(one) one->print();
    if(two) two->print();
    if(three) three->print();
    if(four) four->print();
}

void Node::printVector() const
{
    cout << *(this->data) << endl;
    for(int i = 0; i < allNodes.size(); i++) {
        allNodes.at(i)->printVector();
    }
}

void Node::search(int d) const
{
    if(this->getData()->getValue() == d){
        cout << "Buscando nodo " << *(this) << endl;
        
        if(one) {cout << "\tRama 1: " << one->data->getValue() << endl;}
        if(two) {cout << "\tRama 2: " << two->data->getValue() << endl;}
        if(three) {cout << "\tRama 3: " << three->data->getValue() << endl;}
        if(four) {cout << "\tRama 4: " << four->data->getValue() << endl;}
    }
    
    if(one) one->search(d);
    if(two) two->search(d);
    if(three) three->search(d);
    if(four) four->search(d);
}

 Data *Node::getData() const
{
    return data;
}

Node *Node::getParent() const
{
    return parent;
}

Node *Node::getOne() const
{
    return one;
}

Node *Node::getTwo() const
{
    return two;
}

Node *Node::getThree() const
{
    return three;
}

Node *Node::getFour() const
{
    return four;
}

std::ostream &operator <<(std::ostream &os, const Node &d)
{
    os << *(d.data);
    return os;
}
