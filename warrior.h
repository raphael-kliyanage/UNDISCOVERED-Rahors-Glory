#ifndef DEF_WARRIOR
#define DEF_WARRIOR
#include "character.h"

class warrior : public character
{
    public:
        void punching_with_hammer_like_a_deaf(character &target);
        void introducing();

        warrior();
        warrior(std::string name, int life);
};

#endif // DEF_WARRIOR
