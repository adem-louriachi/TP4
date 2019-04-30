#include "alarme.h"
#include <iostream>
#include <unistd.h>

using namespace std;

void alarme::declencher()
{
    while (true) {

        cout << "Alarme : la porte n'a pas été refermée" << endl;

        sleep(1);
    }
}

