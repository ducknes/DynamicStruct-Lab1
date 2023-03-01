#include "SetLab1_2_Antonov.h"

int main(int argc, char **argv){
    setlocale(LC_ALL, "Russian");

    Set* mySet = createNewSet(3, 0, 10);
    string setElements = setView(mySet, *" ");
    cout << "Элементы: " << setElements << endl;
    cout << "Мощность множества: " << setPowers(mySet) << endl;

    Set* secondSet = createNewSet(6, 0, 10);
    string setElements2 = setView(secondSet, *" ");
    cout << "Элементы: " << setElements2 << endl;
    cout << "Мощность множества: " << setPowers(secondSet) << endl;

    cout << &mySet << " " << &secondSet << endl;

    cout << boolalpha << isSubSet(mySet, secondSet) << endl;
    return 0;
}