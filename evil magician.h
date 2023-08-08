#ifndef DEF_EVIL_MAGICIAN
#define DEF_EVIL_MAGICIAN
#include "magician.h"

class evil_magician: public magician
{
    public:
        void attack(character &target);
        void introducing();

        evil_magician();
        evil_magician(std::string name, int life);
};

#endif // DEF_EVIL_MAGICIAN
