#include "functions.h"
#include <iostream>

using namespace std;

Node* getMiddleNode(Node* first, int size){
    Node* it = first;

    for(int i=0; i < size/2 ; i++, it=it->getNext()){

    }

    if(it) return it;
    else throw string{"Unexpected Error"};

}

Node *search(Node *first, Node *last, int dato, int size)
{
    if(first == nullptr || last == nullptr)throw string{"Unexpected error"};


    if(dato == first->getData()->getValue()) return first;
    if(dato == last->getData()->getValue()) return last;


    Node* middle = getMiddleNode(first, size);

    if(middle == nullptr) throw string{"Unexpected Error"};

    if(dato == middle->getData()->getValue()) return middle;

    Node* newFirst, *newLast;


    if(dato < middle->getData()->getValue()){
        newFirst = first;
        newLast = middle;
        }else{
        newFirst = middle;
        newLast = last;
    }

    size = size / 2 + 1;

    return search(newFirst, newLast, dato, size);
    search(newFirst, newLast, dato, size);


}

Node *busqueda(Node*first,Node *last,int dato){

    if(dato == first->getData()->getValue()) return first;
    if(dato == last->getData()->getValue()) return last;



     Node* newFirst, *newLast;

    if(dato%5==0||dato%3==0){

        newLast = last->getPrev();

    }else{

        newFirst = first->getNext();
    }

    return busqueda(newFirst,newLast,dato);


}

Node *findFirst(Node*first,int dato)
{

    if(first->getData()->getValue() == dato) return first;

    if(first->getNext())first = first->getNext();

    return findFirst(first,dato);

}

Node *findLast(Node *last, int dato)
{

    if(last->getData()->getValue() == dato) return last;

    if(last->getPrev()) last = last->getPrev();

    return findLast(last, dato);


}
