#include "../Headers/User.h"
#include "../Headers/GeographicCoordinate.h"

#ifndef QUICKIE_USERFACTORY_H
#define QUICKIE_USERFACTORY_H

class UserFactory{
    public:
        User* createUser();
};

#endif //QUICKIE_USERFACTORY_H
