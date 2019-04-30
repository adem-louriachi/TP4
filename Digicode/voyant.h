#ifndef VOYANT_H
#define VOYANT_H
#include <string>





enum couleur{rouge, vert};
enum etat{allume, eteint};

class voyant
{
private :

    couleur c;
    etat e;
public :
    void allumer (void);
    void eteindre (void);
    voyant(couleur, etat);
    std::string GetStatut();
};




#endif // VOYANT_H
