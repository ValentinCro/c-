//
// Created by valentin on 10/4/16.
//

#ifndef TP3_VACATAIRE_H
#define TP3_VACATAIRE_H

#include "Employe.h"

using namespace std;

class Vacataire : public Employe {
private:
    const string societe;
public:
    inline Vacataire(const char* nom = 0, const char* societe = 0) : Employe(nom), societe(societe) {}
    virtual void print(ifstream& f) {
        cout << "nom : " << nom << endl << "societe : " << societe << endl;
    }
    void put_ident(int nb);
};


#endif //TP3_VACATAIRE_H
