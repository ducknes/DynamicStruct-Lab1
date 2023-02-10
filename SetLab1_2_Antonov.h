#include <iostream>
#include <string>
using namespace std;

struct Set {
    int element;
    Set* next;
};

Set* createEmptySet() {}

bool isEmptySet(Set* first) {}

bool isSetHasElement(Set* first, int element) {}

Set* addNewElement(Set* first, int element) {}

Set* createNewSet(int quantity, int min, int max) {}

int setPowers(Set* first) {}

string setView(Set* first, string separator) {}

Set* deleteSet(Set* first) {}