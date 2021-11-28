#include "head.h"

int pilihMenu(){
    cout << "========== MENU ==========" <<endl;
    cout << "1. Menambah N data baru" <<endl;
    cout << "2. Menampilkan semua data" <<endl;
    cout << "3. Menampilkan data 5 orang pertama"<<endl;
    cout << "0. Exit"<<endl;
    cout << "Pilihan menu :";

    int input = 0;
    cin >> input;

    return(input);
}


int main(){
    int pilihan = 0, x, i;
    char kembali;
    string inStr;
    List L;

    createList(L);
    pilihan = pilihMenu();
    while(pilihan != 0){
        switch(pilihan){
        case 1:
            cout << "Jumlah data yang akan ditambahkan :";
            cin >> x;

            i = 1;
            while(i<=x){
                cout << "Masukkan data baru :";
                cin >> inStr;
                insertLast(L, newElement(inStr));
                i++;
            }
            break;

        case 2:
            printList(L);
            break;

        case 3:
            show5Org(L);
            break;
        }


        cout<<"Kembali ke menu utama? (Y/N) :";
        cin >> kembali;
        if(kembali == 'Y'){
            pilihan = pilihMenu();
        } else {
            pilihan = 0;
        }
    }

    cout << "ANDA TELAH KELUAR DARI PROGRAM" << endl;
}
