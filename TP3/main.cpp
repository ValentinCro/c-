#include <iostream>
#include <fstream>
#include "Vacataire.h"
#include "Embauche.h"

using namespace std;

int main() {
    string name1 = "valentin";
    Vacataire vacataire("valentin", "smartpanda");
    Embauche embauche("valentin", 7974205);
    std::ifstream test ("test.txt", std::ifstream::in);
    vacataire.print(test);
    embauche.print(test);
}