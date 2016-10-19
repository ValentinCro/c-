#include <iostream>
#include "intf.h"

using namespace std;

void saisie(int* tab) {
    for (int i = 0; i < TAILLE; i++) {
        cout << "Entrez la valeur de la colonne " << i << endl;
        cin >> tab[i];
    }
}


void voir(int* tab) {
    cout << "En octal : " << endl;
    for (int i = 0; i < TAILLE; i++) {
        cout << oct << tab[i];
    }

    cout << endl << "En decimal : " << endl;
    for (int i = 0; i < TAILLE; i++) {
        cout << dec << tab[i];
    }
}