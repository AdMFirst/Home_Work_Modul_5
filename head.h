#ifndef HEAD_H_INCLUDED
#define HEAD_H_INCLUDED

#include <iostream>
using namespace std;

#define info(P) (P)->info
#define next(P) (P)->next
#define first(L) ((L).first)
#define nil NULL

//nim ke 9 saya 5
typedef string infotype;

typedef struct element *adr;

struct element {
    infotype info;
    adr next;
};

struct List {
    adr first;
};

void createList(List &L);
adr newElement(infotype x);
void insertLast(List &L, adr P);
void printList(List L);
void show5Org(List L);

#endif // HEAD_H_INCLUDED
