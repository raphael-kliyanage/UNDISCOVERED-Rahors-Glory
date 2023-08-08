#include <iostream>
#include "evil magician.h"

using namespace std;

evil_magician::evil_magician()
{
    // calling the magician constructor to set up the magic level at 100
    magician("GUEST_EVIL_MAGICIAN", 80);
    // this update below fixes the name/health issues
    set_name("GUEST_EVIL_MAGICIAN");
    set_life(80);
}

evil_magician::evil_magician(string name, int life)
{
    // calling the magician constructor to set up the magic level at 100
    magician(name, life);
    // this update below fixes the name/health issues
    set_name(name);
    set_life(life);
}

void evil_magician::attack(character &target)
{
    if(target.get_life() > 0 && character::get_life() > 0
    && magician::get_magic_level() > 0) {
        target.taking_damage(25);
        cout << character::get_name() << " attacked with his witchery.\n";
        int magic_lvl =  magician::get_magic_level();
        magic_lvl -= 20;
        if(get_magic_level() < 0)
            magician::set_magic_level(0);
        magician::set_magic_level(magic_lvl);
        cout << endl;
    }
    else if(character::get_life() == 0)
        cout << character::get_name() << " is dead!\n" << endl;
    else if(magician::get_magic_level() <= 0)
        cout << character::get_name() << " magic's level is empty!" << endl;
}

void evil_magician::introducing()
{
    cout << "mwoahahahahaha... I'm an evil magician.\n";
    cout << "I've got " << get_magic_level() << " 'Magic Points' left\n";
    character::introducing();
}
