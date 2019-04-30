#include "capteur.h"
#include "kbhit.h"


int capteur::detecter()
{
    if (_kbhit()!= 0) return 0;
    return  1;
}
