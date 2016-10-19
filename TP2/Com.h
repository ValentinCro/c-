#ifndef TP2_COM_H
#define TP2_COM_H

#include <string>
#include "stock.h"

using namespace std;

class Com {
private:
    string id;
    int rf;
    int qt;
public:
    void saisierf();
    void print();
    Com commande(Stock &a, int b);
};


#endif //TP2_COM_H
