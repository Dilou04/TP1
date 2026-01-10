#ifndef EMPRUNT_H
#define EMPRUNT_H

#include "date.h"
#include "livre.h"
#include "lecteur.h"


#include <iostream>
#include <string>

class Emprunt{
    public:
        Date getDateEmprunt();
        Livre getIsbn();
        Lecteur getIdentifiant();
        Emprunt(Date dateEmprunt, Livre isbn, Lecteur identifiant);
        Date dateEmprunt();
        Livre isbn();
        Lecteur identifiant();

    private:
        Date dateEmprunt_;
        Livre isbn_;
        Lecteur identifiant_;
};

#endif