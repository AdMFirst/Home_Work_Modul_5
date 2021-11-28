#include "head.h"

void createList(List &L){
    /*membuat sebuah list baru*/
    first(L) = nil;
};

adr newElement(infotype x){
    /*membuat element baru dengan input isi element*/
    adr P;
    P = new element;
    info(P) = x;
    next(P) = nil;
    return(P);
};

void insertLast(List &L, adr P){
    /*memasukan element ke belakang list*/
    adr Q = first(L);

    if(Q != nil){
        while(next(Q) != nil) {
            Q = next(Q);
        }

        next(Q) = P;
        next(P) = nil;
    } else {

        first(L) = P;
    }


};

void printList(List L){
    /*menuliskan semua data yang tersimpan*/
    adr P;
    int i;

    if(first(L) == nil){
        cout << "List kosong!" << endl;
    } else {
        i = 1;
        P = first(L);

        while(P != nil){
            cout<< i <<". Nama :" << info(P) <<endl;
            P = next(P);
            i++;
        };

        cout<< "List selesai ditampilkan!" <<endl;
    }
};

void show5Org(List L){
    /*Procedure show data 5 orang pertama yang datang ke
    perpustakaan. List bisa saja kosong atau berisi kurang dari 5 orang*/

    int i = 1;
    adr P = first(L);
    cout << "Lima orang pertama :" <<endl;
    while(i<=5 && P != nil){
        cout<< i <<". Nama :" << info(P) <<endl;
        P = next(P);
        i++;
    }
};
