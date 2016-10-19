#include <iostream>
#include "Com.h"

using namespace std;

Com::Com() : id(""), rf(0), qt(0) {

};

void Com::saisierf() {
    cout << "Entrez une valeur en hexadécimal" << endl;
    cin >> hex >> rf;
}

void Com::print() {
    cout << "rf : " << hex << rf << endl;
    cout << "qt : " << dec << qt << endl;

}

Com Com::commande(Stock &a, int b) {
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
