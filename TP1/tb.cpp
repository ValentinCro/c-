#include "tb.h"
#include "op.h"
#include "intf.h"

void tswap (int* tab1, int* tab2) {
    for (int i = 0; i < TAILLE; i++) {
        swap(tab1[i], tab2[i]);
    }
}

void ttswap (int *first, int *second) {
    
}