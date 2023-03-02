#include "SetLab1_2_Antonov.h"

int main(int argc, char **argv){
    setlocale(LC_ALL, "Russian");
    
    srand(time(NULL));
    Set* set = createNewSet(6 + rand() % 3, 10, 100);
    cout << "Создано множество: " << setView(set, ' ') << endl;
    cout << "Мощность множества: " << setPowers(set) << endl;
    cout << "Вывод множества: " << setView(set, ',') << endl;
    set = deleteSet(set);
    cout << "Множество удалено" << endl;
    cout << "Вывод множества: " << setView(set, ' ') << endl;
    cout << "Мощность множества: " << setPowers(set) << endl;
    return 0;
}