#include <iostream>
#include "character.h"

using namespace std;

character::character()
{
    m_name = "GUEST";
    m_life = 100;
    m_dodged = false;
    //cout << "Character's constructor " << m_name << " " << m_life << endl;
}

character::character(string name, int life)
{
    m_name = name;
    m_life = life;
    m_dodged = false;
    //cout << "Character's constructor " << m_name << " " << m_life << endl;
}

void character::introducing()
{
    cout << "I'm " << m_name << endl;
    cout << "I have " << m_life << " hp!\n" << endl;
}

void character::fist_attack(character &target)
{
    if(m_life > 0) {
        cout << m_name << " is punching " << target.m_name  << "\n"<< endl;
        target.taking_damage(10);
    }

    if(m_dodged == false && m_life < 100) {
        cout << m_name << " gained 10 hp for being brave!\n";
        m_life += 10;
        cout << m_name << " has now " << m_life << "hp!\n" << endl;
    }
    m_dodged = false;
}

void character::taking_damage(unsigned int damage)
{
    cout << m_name << " lost " << damage << " hp!\n";
    m_life -= damage;
    if(m_life < 0)
        m_life = 0;
    cout << m_name << " has now " << m_life << " hp!\n" << endl;
}

bool character::dodging()
{
    unsigned int random_choice = rand() % 2;    // 50% of dodging the attack
    if(random_choice == 1) {
        m_dodged = true;
        cout << m_name << " has dodged the attack\n" << endl;

    } else {
        m_dodged = false;
        cout << m_name << " failed to dodge the attack\n" << endl;
    }

    return m_dodged;
}

bool character::alive()
{
    if(m_life > 0) {
        cout << m_name << " is alive!\n" << endl;
        return true;
    } else {
        cout << m_name << " died!\n" << endl;
        return false;
    }
}

int character::get_life() {return m_life;}
string character::get_name() {return m_name;}

void character::set_life(int life) {m_life = life;}
void character::set_name(string name) {m_name = name;}
