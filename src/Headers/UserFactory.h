#include "../Headers/User.h"

#ifndef QUICKIE_USERFACTORY_H
#define QUICKIE_USERFACTORY_H

#include "../Headers/User.h"

/**
 * @brief Factory for creating users
 */
class UserFactory {
    public:
        /**
         * @brief Create a User object
         * @return User* pointer to user
         */
        User* createUser();
};

#endif //QUICKIE_USERFACTORY_H
