//
// Created by valentin on 10/4/16.
//

#ifndef TP3_EMPLOYE_H
#define TP3_EMPLOYE_H

#include <iostream>

using namespace std;

class Employe {
protected:
    const string nom;

public:
    Employe(string = 0);
    virtual void put_ident(int nb) = 0;
};


#endif //TP3_EMPLOYE_H
