#include "SetLab1_2_Antonov.h"

//  Создание пустого множества
Set* createEmptySet() {
    return new Set();
}

//  Проверка на пустоту множества
bool isEmptySet(Set* first) {
    return first == nullptr ? true : false;
}

//  Проверка элемента на принадлежность множеству
bool isSetHasElement(Set* first, int element) {
    if (isEmptySet(first) == true) {
        return false;
    } else {
        Set* current = first;
        while (current != NULL)
        {
            if (current -> element == element){
                return true;
            }
            current = current -> next;
        }
    }
    return false;
}

//  Добавление нового элемента в начало множества
Set* addNewElement(Set* first, int element) {
   if (!isSetHasElement(first, element))
   {
    
   }
}