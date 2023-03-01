#include "SetLab1_2_Antonov.h"

int main(int argc, char **argv){
    setlocale(LC_ALL, "Russian");
    Set* mySet = createNewSet(3, 0, 10);
    string setElements = setView(mySet, *" ");
    cout << "Элементы: " << setElements << endl;
    cout << "Мощность множества: " << setPowers(mySet) << endl;
    string newSetElements = setView(mySet, *" ");
    cout << "Элементы: " << newSetElements << endl;
    cout << "Мощность множества: " << setPowers(mySet) << endl;
    Set* secondSet = createNewSet(3, 0, 10);
    string setElements2 = setView(secondSet, *" ");
    cout << "Элементы: " << setElements2 << endl;
    cout << boolalpha << isSubSet(mySet, secondSet) << endl;
}