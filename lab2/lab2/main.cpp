#include <iostream>
#include <ctime>
#include <random>
#include "array.h"
#include "list.h"
#include "binary.h"
#include "machWord.h"
#include "make.h"

using namespace std;

int main() {
    srand(time(nullptr));

    int kod = 1;

    while (kod)
    {
        cout << "0 - EXIT\n1 - Array\n2 - List\n3 - Bits\n4 - Mashin word" << endl;
        cout << "Input mode: ";
        cin >> kod;

        if (kod == 1) makeArray();
        else if (kod == 2) makeList();
        else if (kod == 3) makeBinary();
        else if (kod == 4) makeMachWord();

        char c;
        cout << endl << "To continue, enter any char" << endl;
        cin >> c;

        system("cls");
    }

    cout << "EXIT" << endl;

    return 0;
}