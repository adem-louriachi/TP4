#include "voyant.h"


void voyant::allumer(void) {
    if (e == eteint) e = allume ;
}

void voyant::eteindre(void) {
    if (e == allume) e = eteint ;
}

std::string voyant::GetStatut()
{
if (e == allume) return "on";
else return "off";
}
