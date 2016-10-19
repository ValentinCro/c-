#include <iostream>
#include "Vecteur.h"
int main() {
    Vecteur<int, 8> vecteur;
    for (int i = 0; i  < 8 ;i++) {
        cout << "position " << i << " : " << vecteur[i] << endl;
    }
    int * p;
    int t = 6;
    p = &t;
    vecteur.put(2, p);
    int i = 2;
    cout << "position " << i << " : " << vecteur[i] << endl;
    
    return 0;
}