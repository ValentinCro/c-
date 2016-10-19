#include <iostream>
#include "stock.h"

using namespace std;

Stock::Stock(string id, int nb) : id(id), nb(nb) {
};

void Stock::print() const {
    cout << "id : " << this->id << endl << "nb : " << this->nb;
}
