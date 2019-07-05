#include <iostream>


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

        //  examen Parcial - Modelo A

        int d = 5;
        string l = "+ 5i";

        list.push_back(new Data(4,"+4i"));



        list.push_in_order(new Data(d,l));
        list.push_in_order(new Data(7,"+7i"));
        list.push_in_order(new Data(6,"+6i"));
        list.push_in_order(new Data(3," + 3i"));
        list.push_in_order(new Data(8,"8+1"));




        cout << list << endl;

        cout << "--------------" << endl;

        //ordenar
        //list.bubbleSort();
        //cout << "Sorted" << endl;
        // cout << list << endl;




        //BUSQUEDA

        d = 8;

        cout << "Looking for " << d << endl;
        Node* result = search(list.getFirst(), list.getLast(), d, list.getSize());

        cout << "--------------" << endl;

        if(result)  result->print();
        if(result)  cout << "Done!" << endl;

        cout<<endl;

        d = 5;

        result = findFirst(list.getFirst(),5);

        if(result)  result->print();
        if(result)  cout << "Done!" << endl;



        result = findLast(list.getLast(),5);

        if(result)  result->print();
        if(result)  cout << "Done!" << endl;



        return 0;

        }catch(string e){
            cout << e << endl;

        }


    /*
    try{


    List inicio;//NODO INICIAL
    List par;//RAMA QUE ALMACENA LOS NUMEROS PARES.
    List impar;//RAMA QUE ALMACENA LOS NUMEROS IMPARES.


   inicio.push_back(new Data(0));


    for(int i=0; i < 20; i++){
        int v = rand()%100;

        //RAMA PAR

        if(v%5==0&&v%2==0){


            par.push_front(new Data(v));
            continue;
        }
        if(v%3==0&&v%2==0){


            par.push_front(new Data(v));
            continue;

        }

        if(v%5!=0&&v%2==0){


            par.push_back(new Data(v));
            continue;
        }
        if(v%3!=0&&v%2==0){


            par.push_back(new Data(v));
            continue;

        }


        if(v%5==0&&v%2!=0){


            impar.push_front(new Data(v));
            continue;
        }
        if(v%3==0&&v%2!=0){


            impar.push_front(new Data(v));
             continue;

        }

        if(v%5!=0&&v%2!=0){


            impar.push_back(new Data(v));
            continue;
        }
        if(v%3!=0&&v%2!=0){


            impar.push_back(new Data(v));
            continue;

        }


    }

    int menu = 0;

    while(menu!=5){

    cout<<"1.Imprimir lista."<<endl;
    cout<<"2.Buscar numero en la lista."<<endl;
    cout<<"5.Salir"<<endl;
    cin>>menu;

    if(menu == 1){

        inicio.setFirst(par.getFirst());
        inicio.setLast(par.getLast());
        cout<<inicio<<endl;

        inicio.setFirst(impar.getFirst());
        inicio.setLast(impar.getLast());
        cout<<inicio<<endl;


    }

    if(menu == 2){

        int data_search;
        cout<<"Introduce el numero que quieres buscar"<<endl;
        cin>>data_search;


        inicio.setFirst(par.getFirst());
        Node *newFirst = inicio.getFirst(),*newLast = inicio.getLast();



        while(data_search != newFirst->getData()->getValue() || data_search != newLast->getData()->getValue()){



            if(newFirst!=nullptr){

                 newFirst->print();

            }
            if(newLast!=nullptr){

               newLast->print();

            }


            if(data_search%5==0 && data_search%2==0){

                newLast = par.getLast()->getPrev();
                continue;
            }
            if(data_search%3==0&&data_search%2==0){


                newLast = par.getLast()->getPrev();
                continue;

            }

            if(data_search%5!=0&&data_search%2==0){


                newFirst = par.getFirst()->getNext();
                continue;
            }
            if(data_search%3!=0&&data_search%2==0){


                newFirst = par.getFirst()->getNext();
                continue;

            }


            if(data_search%5==0&&data_search%2!=0){


                newLast = impar.getLast()->getPrev();
                continue;
            }
            if(data_search%3==0&&data_search%2!=0){


                newLast = impar.getLast()->getPrev();
                continue;

            }

            if(data_search%5!=0&&data_search%2!=0){


                newFirst = impar.getFirst()->getNext();
                continue;
            }
            if(data_search%3!=0&&data_search%2!=0){


                newFirst = impar.getFirst()->getNext();
                continue;

            }


        }

    }

    }



    }catch(string e){
        cout << e << endl;
    }

    */
}
