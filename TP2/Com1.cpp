#include <iostream>
#include "Com1.h"

using namespace std;

Com1::Com1() : id(""), rf(0), qt(0) {

};

void Com1::saisierf() {
    cout << "Entrez une valeur en hexadécimal" << endl;
    cin >> hex >> rf;
}

void Com1::print() {
    cout << "rf : " << hex << rf << endl;
    cout << "qt : " << dec << qt << endl;

}

Com1 Com1::commande(Stock &a, int b) {
    if ( a.nb >= b ) {
        saisierf();
        a.nb = a.nb - b;
        qt = b;
        id = a.id;
    } else {
        rf = 0;
        qt = 0;
        id = "";
    }
    return *this;
}
