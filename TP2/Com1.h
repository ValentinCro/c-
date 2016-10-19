#ifndef TP2_COM_H
#define TP2_COM_H

#include <string>
#include "stock.h"

using namespace std;

class Stock;

class Com1 {
private:
    string id;
    int rf;
    int qt;
public:
    void saisierf();
    void print();
    Com1 commande(Stock &a, int b);
};


#endif //TP2_COM_H
