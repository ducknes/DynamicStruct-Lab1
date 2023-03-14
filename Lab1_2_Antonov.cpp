#include "SetLab1_2_Antonov.h"

int main(int argc, char **argv){
    setlocale(LC_ALL, "Russian");
    
    srand(time(NULL));
    
    Set* A = createNewSet(6, 10, 100, 'A');
    Set* B = createNewSet(6, 10, 100, 'B');
    cout << setView(A, ' ') << endl;
    cout << setView(B, ' ') << endl;
    Set* C = unionOfSets(A, B);
    cout << setView(C, ' ') << endl;
    return 0;
}