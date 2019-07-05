#include <iostream>
#include <time.h>

#include "list.h"
#include "node.h"
#include "data.h"
#include "functions.h"

using namespace std;


bool operator* (Data a, Data b){
    return true;
}

int main()
{
    try{


    List list;
    List list_pares;
    List list_impares;

    int data = 1;


    for(int i = 0; i<100;i++){

        data = i*3;

        if(data%2 == 0){

            list_pares.push_back(new Data(data));

        }else {

            if(data % 3 == 0 || data %5 == 0){

                list_impares.push_front(new Data(data));


            }else{

                list_impares.push_back(new Data(data));


            }

        }

    }



    cout << "--------------" << endl;
    cout << "Pares" << endl;
    list.setFirst(list_pares.getFirst());
    cout<<list<<endl;

    cout << "--------------" << endl;
    cout<<"Impares"<<endl;
    list.setFirst(list_impares.getFirst());
    cout<<list<<endl;




    cout << "--------------" << endl;


    int find_data = 0;
    Node *search;

    cout<<"Introduce el dato a buscar : "<<endl;
    cin>>find_data;



    if(find_data % 2 == 0 ){

        search = findFirst(list_pares.getFirst(),find_data);

    }else{

        if(find_data %3 == 0 || find_data % 5 == 0){

            search = findLast(list_impares.getLast(),find_data);
        }else{

            search = findFirst(list_impares.getFirst(),find_data);

        }

    }

    if(search) cout<<"Encontrada"<<endl;
    if(search) cout<<search->getData()->getValue()<<endl;



    /*

    Node *findFirst(Node *first,int data);
    Node *findLast(Node *last,int data);


    cout << "Looking for " << 5 << endl;
    Node* result = search(list.getFirst(), list.getLast(), 5, list.getSize());

    cout << "--------------" << endl;
    result->print();
    cout << "Done!" << endl;

    */

    return 0;
    }catch(string e){
        cout << e << endl;
    }
}
