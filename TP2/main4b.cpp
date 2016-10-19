#include <iostream>
#include "Com1.h"
#include "stock.h"

int main() {
    Stock stock("ef0a87dcv12", 20);
    Com1 com;

    com.print();

    Com1 com2 = com.commande(stock, 10);

    com2.print();
}