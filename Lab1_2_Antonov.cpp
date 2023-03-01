#include "SetLab1_2_Antonov.h"

int main(int argc, char **argv){
    setlocale(LC_ALL, "Russian");

    Set* mySet = createNewSet(5, 0, 10);
    string setElements = setView(mySet, *" ");
    cout << "Элементы: " << setElements << endl;
    cout << "Мощность множества: " << setPowers(mySet) << endl;

    Set* secondSet = createNewSet(5, 0, 10);
    string setElements2 = setView(secondSet, *" ");
    cout << "Элементы: " << setElements2 << endl;
    cout << "Мощность множества: " << setPowers(secondSet) << endl;

    cout << &mySet << " " << &secondSet << endl;

    cout << "F9 " <<  boolalpha << isSubSet(mySet, secondSet) << endl;

    cout << "F10 " << boolalpha << isSetsEquals(mySet, secondSet) << endl;

    Set* empty = createEmptySet();
    Set* unionSet = unionOfSets(mySet, secondSet);
    cout << "После объединения: " << setView(unionSet, *" ") << endl;

    return 0;
}