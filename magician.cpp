#include <iostream>
#include "magician.h"
#include "ui.h"

using namespace std;

magician::magician()
{
    m_magic_level = 100;
    character("GUEST_MAGICIAN", 80);
    // this update below fixes the name/health issues
    set_name("GUEST_MAGICIAN");
    set_life(80);
}

magician::magician(string name, int life)
{
    m_magic_level = 100;
    character(name, life);
    // this update below fixes the name/health issues
    set_name(name);
    set_life(life);
    while(m_magic_level < 100) {
        m_magic_level++;
        delay(10000);
    }
}

void magician::drink_potion()
{
    if(character::get_life() > 0) {
        if(magician::m_magic_level >= 100) {
            m_magic_level = 100;
            cout << character::get_name() << "'s magic level is full!\n";
            cout << endl;
        }
        else {
            m_magic_level += 10;
            cout << character::get_name();
            cout << " drank a potion and gained 10 MP!\n";
            cout << endl;
        }
    }
    if(magician::m_magic_level < 0)
        m_magic_level = 0;
}

void magician::fire_ball(character &target)
{
    if(m_magic_level > 0 && character::get_life() > 0) {
        target.taking_damage(20);
        m_magic_level -= 20;
        if(magician::m_magic_level < 0)
            m_magic_level = 0;
        cout << character::get_name() << " thrown 'fire ball' to ";
        cout << target.get_name() << "\n" << endl;
    }
    else
        cout << character::get_name() << " magic's level is empty!" << endl;
}

void magician::introducing()
{
    cout << "Woosh... Oh hello there. I'm a magician.\n";
    cout << "I've got " << m_magic_level << " 'Magic Points' left\n";
    character::introducing();
}

int magician::get_magic_level() {return m_magic_level;}

void magician::set_magic_level(unsigned int magic_level)
{
    m_magic_level = magic_level;
}
