#ifndef DEF_CHARACTER
#define DEF_CHARACTER
#include <string>

class character
{
    public:
        void introducing();
        void fist_attack(character &target);
        void taking_damage(unsigned int damage);
        bool dodging();
        bool alive();

        character();
        character(std::string name, int life);
        int get_life();
        std::string get_name();

        void set_life(int life);
        void set_name(std::string name);

    protected:
        int m_life;
        std::string m_name;
        bool m_dodged;
};

#endif // DEF_CHARACTER
