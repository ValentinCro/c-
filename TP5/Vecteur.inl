//
// Created by valentin on 10/19/16.
//

#include "Vecteur.h"

template<class T,int sz>
Vecteur<T, sz>::Vecteur() {
    for (int i = 0; i < sz ; i++) {
        vc[i] = 0;
    }
};

template<class T,int sz>
void Vecteur<T, sz>::put(int i, const T* p) throw (int) {
    if (i < 0 || i >= sz) {
        throw 1;
    }
    vc[i] = p;
};
