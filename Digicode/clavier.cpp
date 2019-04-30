#include "clavier.h"
#include "kbhit.h"

int clavier::saisirChiffre(void)
{
if ( _kbhit() == 0) return -1;
else return _kbhit() - '0';
}
