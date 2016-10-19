#include "tb.h"
#include "intf.h"
#include <iostream>

using namespace std;

int main (void) {
    int first [TAILLE];
    int second [TAILLE];

    first[0] = 1;
    first[1] = 2;
    first[2] = 3;
    first[3] = 4;
    first[4] = 5;

    second[0] = 5;
    second[1] = 4;
    second[2] = 3;
    second[3] = 2;
    second[4] = 1;

    cout << "first : " << endl;
    voir(first);
    cout << "second : " << endl;
    voir(second);

    tswap(first, second);

    cout << "first : " << endl;
    voir(first);
    cout << "second : " << endl;
    voir(second);

    return 0;
}
