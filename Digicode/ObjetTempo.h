#ifndef _OBJETTEMPO
#define _OBJETTEMPO

#include "Chrono.h"

namespace nsDigicode {

	class ObjetTempo 
    {
    private :
        int delai;
    protected:
        bool attente;

    public:
        Chrono* getChrono() {}
        void finTempo() {}
        int getDelai() {}
        ObjetTempo(Chrono* , int);
    };
	
} /* ns_Digicode */

#endif /* _OBJETTEMPO */
