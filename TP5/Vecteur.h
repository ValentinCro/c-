//
// Created by valentin on 10/19/16.
//

#ifndef TP5_VECTEUR_H
#define TP5_VECTEUR_H

#include <iostream>

using namespace std;

template<class T = int, int sz = 6>class Vecteur {
private:
    const T* vc[sz];

public:
    Vecteur();
    void put(int i, const T* p) throw (int);
    const T* operator []  (const int indice) const throw (int);
};

template<class T,int sz>
const T* Vecteur<T, sz>::operator []  (const int indice) const throw (int) {
    if (indice < 0 || indice >= sz) {
        throw 1;
    }

    return vc[indice];
};

#include "Vecteur.inl"
#endif //TP5_VECTEUR_H
