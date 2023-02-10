#include "SetLab1_2_Antonov.h"

Set* createEmptySet() {
    return new Set();
}

bool isEmptySet(Set* first) {
    return first == nullptr ? true : false;
}

bool isSetHasElement(Set* first, int element) {
    if (isEmptySet(first) == true) {
        return false;
    } else {
        Set* current = first;
        while (current -> next)
        {
            if (current -> element == element){
                return true;
            }
            current = current -> next;
        }
    }
    return false;
}

