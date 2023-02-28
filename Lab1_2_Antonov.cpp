#include "SetLab1_2_Antonov.h"

int main(int argc, char **argv){
    setlocale(LC_ALL, "Russian");
    Set* mySet = createNewSet(6, 0, 10);
    string setElements = setView(mySet, *" ");
    cout << "Элементы: " << setElements << endl;
    cout << "Мощность множества: " << setPowers(mySet) << endl;
    mySet = deleteSet(mySet);
    string newSetElements = setView(mySet, *" ");
    cout << "Элементы: " << newSetElements << endl;
    cout << "Мощность множества: " << setPowers(mySet) << endl;
}