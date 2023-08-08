#include <iostream>
#include "ui.h"   // this file contains ui related functions
#include "character.h"
#include "magician.h"
#include "warrior.h"
#include "evil magician.h"
#include "white magician.h"

using namespace std;

int main()
{
    /** pre-alpha test
        testing the game engine for debugging on the game's earliest stage
    */
    /*
    character nathan("[GOD] Nathan", 9999999999999);
    warrior huel("Huel", 125);
    magician walter("Walter", 80);
    white_magician juliet("Juliet", 80);
    evil_magician dimitri("Dimitri", 80);

    // introducing - no bugs
    nathan.introducing();
    huel.introducing();
    walter.introducing();
    juliet.introducing();
    dimitri.introducing();
    */

    /** fist-attacks - 2 bugs;
            - players can hit themselves
            - punching without dodging doesn't bring a 10hp bonus
    */
    /*
    nathan.fist_attack(dimitri);
    huel.fist_attack(huel); // interesting
    juliet.fist_attack(dimitri);
    dimitri.fist_attack(huel);
    walter.fist_attack(huel);
    */

    /** dodging - 2.5 bugs
            - dodging does nothing about damage
            - not dodging from someone
            - (0.5) attacking after dodging gives you a 10hp bonus
        ideas:
            - half a chance to dodge the attack from someone
            - set to 'true' dodging() for a few seconds
    */
    /*
    nathan.dodging();
    huel.dodging();
    walter.dodging();
    juliet.dodging();
    dimitri.dodging();

    nathan.fist_attack(dimitri);
    huel.fist_attack(huel); // interesting
    juliet.fist_attack(dimitri);
    dimitri.fist_attack(huel);
    walter.fist_attack(huel);
    */

    /** magician: fire_ball() - 2 bugs
            - printing: "'player' is alive!"
            - the sentence's order isn't right
    */
    /*
    walter.fire_ball(huel);
    dimitri.fire_ball(juliet);
    juliet.fire_ball(dimitri);
    */

    /** warrior: punching_with_hammer_like_a_deaf() - 1 bug
            - doesn't print the target's name
    */
    //huel.punching_with_hammer_like_a_deaf(juliet);

    /** white_magician: heal() - 2 bugs
            - printing: "[target] is alive !"
            - doesn't print the new stats (magic_level, hp...)
    */
    //juliet.heal(dimitri);

    /** evil_magician: attack() - 1 bug
            - printing: "[target] is alive !"
    */
    /*
    dimitri.attack(nathan);

    // magician: magic_points - no bugs
    walter.fire_ball(nathan);
    walter.drink_potion();
    walter.drink_potion();
    walter.fire_ball(nathan);

    juliet.fire_ball(nathan);
    juliet.fire_ball(nathan);
    juliet.fire_ball(nathan);
    juliet.fire_ball(nathan);

    dimitri.fire_ball(nathan);
    dimitri.fire_ball(nathan);
    dimitri.fire_ball(nathan);
    dimitri.fire_ball(nathan);
    */

    /** alpha test
        testing the game engine alongside with the ui for debugging on the
        game's latest stages
    */
    startup_screen();
    main_menu();

    return 0;
}
