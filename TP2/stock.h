#ifndef TP2_STOCK_H
#define TP2_STOCK_H

#include <string>
#include "Com1.h"

using namespace std;


class Stock {
    friend class Com;
private:
    int nb;
    const string id;

public:
    Stock(string id, int=100);
    void print() const;

    friend Com1 Com1::commande(Stock &a, int b);
};


#endif //TP2_STOCK_H
