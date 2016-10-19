#include <iostream>
#include "Com.h"
#include "stock.h"

int main() {
    Stock stock("ef0a87dcv12", 20);
    Com com;

    com.print();

    Com com2 = com.commande(stock, 10);

    com2.print();
}