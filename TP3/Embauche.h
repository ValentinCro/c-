//
// Created by valentin on 10/4/16.
//

#ifndef TP3_EMBAUCHE_H
#define TP3_EMBAUCHE_H

#include "Employe.h"

using namespace std;

class Embauche : public Employe {
private:
    int matricule;
public:
    Embauche(string nom = 0, int matricule = 0) : Employe(nom), matricule(matricule) {}
    virtual void print(ifstream& f) {
        cout << "nom : " << nom << endl << "matricule : " << matricule << endl;
    }
    void put_ident(int nb);
};


#endif //TP3_EMBAUCHE_H
