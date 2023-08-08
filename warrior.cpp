#include <iostream>
#include "warrior.h"

using namespace std;

warrior::warrior()
{
    character("GUEST_WARRIOR", 125);
    // this update below fixes the name/health issues
    set_name("GUEST_WARRIOR");
    set_life(125);
}

warrior::warrior(string name, int life)
{
    character(name, life);
    // this update below fixes the name/health issues
    set_name(name);
    set_life(life);
}

void warrior::punching_with_hammer_like_a_deaf(character &target)
{
    cout << character::get_name() << " is punching with his hammer like a";
    cout << " deaf\n" << endl;
    target.taking_damage(20);
}

void warrior::introducing()
{
    cout << "WAAAaaargh! I AM A TRUE WARRIOR!\n";
    character::introducing();
}
