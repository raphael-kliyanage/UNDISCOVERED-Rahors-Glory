#ifndef DEF_MAGICIAN
#define DEF_MAGICIAN
#include "character.h"

class magician: public character
{
    public:
        void drink_potion();
        void fire_ball(character &target);
        void introducing();

        magician();
        magician(std::string name, int life);

        int get_magic_level();
        void set_magic_level(unsigned int magic_level);

    protected:
        int m_magic_level;
};

#endif // DEF_MAGICIAN
