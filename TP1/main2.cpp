#include "op.h"
#include <iostream>

using namespace std;

int main (void) {
    int first = 13;
    int second = 67;

    cout << "first : " << first << endl;
    cout << "second : " << second << endl;

    swap(first, second);

    cout << "first : " << first << endl;
    cout << "second : " << second << endl;

    return 0;
}
