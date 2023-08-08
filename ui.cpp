#include <iostream>
#include <stdlib.h> // to clear the console
#include <unistd.h> // for the delays
#include "ui.h"
#include "character.h"
#include "warrior.h"
#include "magician.h"
#include "white magician.h"
#include "evil magician.h"
#include <thread>
#include <chrono>

using namespace std;
using std::this_thread::sleep_for;
using std::chrono::milliseconds;

void delay(int ms)
{
    usleep(ms * 1000);
}

// Implement the slow_print function
/**
 Function to print each character in a string with a delay (a "typewriter"
 effect)
 @param message         The string to print
 @param millis_per_char Milliseconds to take to print each character
*/
void anim(const string& message, unsigned int millis_per_char)
{
    /** Range loops are "for each" constructs; here: for each character in the
    string */
    for (const char c: message) {
        /** flush is used to make sure the buffer is emptied to the terminal
        immediately */
        cout << c << flush;
        // Ask the thread to sleep for at least n millis.
        sleep_for(milliseconds(millis_per_char));
    }
}

void spacing_top()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}

void spacing_bottom()
{
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
}

void startup_screen()
{
    spacing_top();
    cout << "                     RHE(R) Computer Entertainment Inc.\n";
    cout << "                                 presents              \n";
    spacing_bottom();
    delay(3500);
    system("clear");

    spacing_top();
    cout << "                              UNDISCOVERED:\n";
    cout << "                              ";
    anim("Rahor's Glory\n", 150);
    delay(1500);
    system("clear");

    spacing_top();
    cout << "               LOADING [                         ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|                        ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||                       ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||                      ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||                     ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||                    ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||                   ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||                  ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||                 ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||                ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||||               ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||              ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||||||             ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||            ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||||||||           ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||||          ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||||||||||         ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||||||        ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||||||||||||       ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||||||||      ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||||||||||||||     ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||||||||||    ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||||||||||||||||   ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||||||||||||  ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||||||||||||| ]          \n";
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||||||||||||||]          \n";
    spacing_bottom();
    delay(1000);
    system("clear");

    spacing_top();
    cout << "                              DONE!              \n";
    spacing_bottom();
    delay(1000);
    system("clear");

    spacing_top();
    cout << "               ";
    anim("Welcome to UNDISCOVERED: Rahor's Glory!\n", 20);
    cout << "\n" << endl;
    cout << "                   Press [ENTER] to continue";
    cin.ignore();
    system("clear");
}

void main_menu()
{
    string s_choice;
    char choice;
    int input;
    bool quit = false;

    menu:
    s_choice = "";
    choice = '\0';
    cout << "---------------------------- MENU ----------------------------\n";
    cout << "----------------- UNDISCOVERED: Rahor's Glory ----------------\n";
    cout << "                                      ";
    anim("    version: alpha 2.7.9\n", 20);
    cout << endl;
    cout << "   1/ Play\n";
    cout << "   2/ Options\n";
    cout << "   3/ Credits\n";
    cout << "   4/ Quit\n";
    cout << endl;
    cin >> s_choice;
    system("clear");

    if(s_choice == "1")
        choice = '1';
    else if(s_choice == "2")
        choice = '2';
    else if(s_choice == "3")
        choice = '3';
    else if(s_choice == "4")
        choice = '4';
    else
        choice = '\0';  // NULL

    do {
        switch(choice) {
            case '1': {
                create_player();
                goto menu;
                cout << endl;
                    break;
            }

            case '2': {
                option_menu();
                goto menu;
                cout << endl;
                    break;
            }

            case '3': {
                credit();
                goto menu;
                cout << endl;
                    break;
            }

            case '4': {
                anim("Are you sure to quit the game? (y/n)\n", 20);
                cin >> choice;
                switch(choice) {
                    case 'y': {
                        quit = true;
                            break;
                    }

                    case 'Y': {
                        quit = true;
                            break;
                    }

                    case 'n': {
                        system("clear");
                        goto menu;
                            break;
                    }

                    case 'N': {
                        system("clear");
                        goto menu;
                            break;
                    }
                }
                cout << endl;
                    break;
            }

            default: {
                cout << "Pay 1.99$ and maybe the DLC be out soon!" << endl;
                cout << endl;
                delay(1500);
                system("clear");
                goto menu;
                    break;
            }
        }
    } while(quit != true);
}

void loading_game_level()
{
    // generating a random tips & tricks while waiting for the loading time
    unsigned int tips_tricks;
    tips_tricks = rand() % 10;  // 10 tips & tricks screens from 0 to 9

    // all the differents tips & tricks messages
    string msg;
    if(tips_tricks == 0)
        msg = "     Fist attacks without dodging will increase by 10 your HP!";
    else if(tips_tricks == 1)
        msg = "     Remember to check your HP from time to time.";
    else if(tips_tricks == 2) {
        msg = " Don't forget to drink potion magician, or you won't be able to";
        msg += " attack!";
    }
    else if(tips_tricks == 3)
        msg = "     Evil magician uses their witchery to kill people.";
    else if(tips_tricks == 4)
        msg = "     White magicians can heal with their witchery.";
    else if(tips_tricks == 5)
        msg = "     Cheat code are fun, but decreases your global score.";
    else if(tips_tricks == 6)
        msg = "     Adjust the game's settings for the best gaming experience.";
    else if(tips_tricks == 7)
        msg = "         Your character can introduce himself.";
    else if(tips_tricks == 8)
        msg = "     Struggling on a level? You can use cheat codes.";
    else if(tips_tricks == 9)
        msg = "     Unlocking trophies increases your global game progression.";
    else msg = "";

    spacing_top();
    cout << "               LOADING [                         ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|                        ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||                       ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||                      ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||                     ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||                    ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||                   ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||                  ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||                 ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||                ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||||               ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||              ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||||||             ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||            ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||||||||           ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||||          ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||||||||||         ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||||||        ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||||||||||||       ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||||||||      ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||||||||||||||     ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||||||||||    ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [||||||||||||||||||||||   ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||||||||||||  ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||||||||||||| ]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(150);
    system("clear");

    spacing_top();
    cout << "               LOADING [|||||||||||||||||||||||||]          \n";
    cout << endl;
    cout << msg << endl;
    spacing_bottom();
    delay(1000);
    system("clear");
}

int volume = 0;
string graphics = "80x24@60Hz";
string hdr = "OFF";
void option_menu()
{
    char choice = '\n';
    string quit;    // enter any key to exit the menu

    option:
    cout << "--------------------------- OPTIONS --------------------------\n";
    cout << "----------------- UNDISCOVERED: Rahor's Glory ----------------\n";
    cout << "                                          version: alpha 2.7.9\n";
    cout << endl;
    cout << "   1/ Sound\n";
    cout << "   2/ Graphics\n";
    cout << "   3/ <<< Back\n";
    cout << endl;
    cout << endl;
    cout << "Current sound settings:   Dolby Atmos " << volume << "%\n";
    cout << "Current graphics settings:    " << graphics << "\n";
    cout << "HDR:    " << hdr;
    cout << endl;
    cin >> choice;
    system("clear");

    switch(choice) {
        case '1': {
            cout << "Current sound settings:  Dolby Atmos " << volume << "%\n";
            cout << endl;
            cout << "Enter volume level (0 - 100):  ";
            cin >> volume;
            if(volume < 0)
                volume = 0;
            else if(volume > 100)
                volume = 100;
            system("clear");
            cout << "Current sound settings:   Dolby Atmos " << volume << "%\n";
            cout << endl;
            cout << "Press [ENTER] to continue\n" << endl;
            cin.ignore();
            cin.ignore();
            system("clear");
                break;
        }

        case '2': {
            cout << "Current display settings:    " << graphics << "\n";
            cout << "Current HDR setting:    " << hdr << "\n";
            cout << endl;
            cout << "Enter new display settings (use '_' for spaces):  ";
            cin >> graphics;
            cout << "\n" << endl;
            cout << "Enter new HDR setting (ON - OFF):  ";
            cin >> hdr;
            system("clear");
            cout << "Current sound settings:    " << graphics << "\n";
            cout << "Current HDR setting:    " << hdr << "\n";
            cout << endl;
            cout << "Press [ENTER] to continue\n" << endl;
            cin.ignore();
            cin.ignore();
            system("clear");
                break;
        }

        case '3': {
            system("clear");
                break;
        }

        default: {
            cout << "Please enter a valid choice." << endl;
            delay(2000);
            system("clear");
            goto option;
        }
    }
}

character *player_character[4];    // up to 4 players
magician *player_magician[4];    // up to 4 players
warrior *player_warrior[4];    // up to 4 players
evil_magician *player_evil_magician[4];    // up to 4 players
white_magician *player_white_magician[4];    // up to 4 players
void create_player()
{
    char choice;
    string input;
    bool quit = false;

    player_choice:
    cout << "------------------------ CREATE PLAYER -----------------------\n";
    cout << "----------------- UNDISCOVERED: Rahor's Glory ----------------\n";
    cout << "                                      version: alpha 2.7.9\n";
    cout << endl;
    cout << "   1/ Default\n";
    cout << "   2/ Warrior\n";
    cout << "   3/ Magician\n";
    cout << "   4/ Evil magician\n";
    cout << "   5/ White magician\n";
    cout << endl;
    cout << "   6/ <<< Back\n";
    cout << endl;
    cin >> choice;
    system("clear");

    do {
        switch(choice) {
            case '1': {
                cout << "Enter your name (use '_' for spaces):   ";
                cin >> input;
                player_character[0] = new character(input, 100);
                system("clear");
                cout << "Player's info:\n" << endl;
                cout << "Name:  ";
                anim(input, 20);
                cout << endl;
                cout << "HP:  ";
                anim("100", 20);
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                anim("Good luck, have fun!\n", 20);
                cout << "Press [ENTER] to continue\n" << endl;
                cin.ignore();
                cin.ignore();
                system("clear");
                loading_game_level();
                gameplay_character();
                quit = true;
                    break;
            }

            case '2': {
                cout << "Enter your name (use '_' for spaces):   ";
                cin >> input;
                player_warrior[0] = new warrior(input, 125);
                system("clear");
                cout << "Player's info:\n" << endl;
                cout << "Name:  ";
                anim(input, 20);
                cout << endl;
                cout << "HP:  ";
                anim("125", 20);
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                anim("Good luck, have fun!\n", 20);
                cout << "Press [ENTER] to continue\n" << endl;
                cin.ignore();
                cin.ignore();
                system("clear");
                loading_game_level();
                gameplay_warrior();
                quit = true;
                    break;
            }

            case '3': {
                cout << "Enter your name (use '_' for spaces):   ";
                cin >> input;
                player_magician[0] = new magician(input, 80);
                system("clear");
                cout << "Player's info:\n" << endl;
                cout << "Name:  ";
                anim(input, 20);
                cout << endl;
                cout << "HP:  ";
                anim("80", 20);
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                anim("Good luck, have fun!\n", 20);
                cout << "Press [ENTER] to continue\n" << endl;
                cin.ignore();
                cin.ignore();
                system("clear");
                loading_game_level();
                gameplay_magician();
                quit = true;
                    break;
            }

            case '4': {
                cout << "Enter your name (use '_' for spaces):   ";
                cin >> input;
                player_evil_magician[0] = new evil_magician(input, 80);
                system("clear");
                cout << "Player's info:\n" << endl;
                cout << "Name:  ";
                anim(input, 20);
                cout << endl;
                cout << "HP:  ";
                anim("80", 20);
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                anim("Good luck, have fun!\n", 20);
                cout << "Press [ENTER] to continue\n" << endl;
                cin.ignore();
                cin.ignore();
                system("clear");
                loading_game_level();
                gameplay_evil_magician();
                quit = true;
                    break;
            }

            case '5': {
                cout << "Enter your name (use '_' for spaces):   ";
                cin >> input;
                player_white_magician[0] = new white_magician(input, 80);
                system("clear");
                cout << "Player's info:\n" << endl;
                cout << "Name:  ";
                anim(input, 20);
                cout << endl;
                cout << "HP:  ";
                anim("80", 20);
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                cout << endl;
                anim("Good luck, have fun!\n", 20);
                cout << "Press [ENTER] to continue\n" << endl;
                cin.ignore();
                cin.ignore();
                system("clear");
                loading_game_level();
                gameplay_white_magician();
                quit = true;
                    break;
            }

            case '6': {
                system("clear");
                quit = true;
                    break;
            }

            default: {
                cout << "Please enter a valid choice." << endl;
                delay(2000);
                system("clear");
                goto player_choice;
            }
        }
    } while(quit == false);

}

int score = 0;  // global game score
evil_magician rahor("Rahor", 100);
void gameplay_character()
{
    //evil_magician rahor = new evil_magician("Rahor", 100);

    string choice;   // to be able to enter cheat codes
    char choice_convert;    // convert the choice from string to char

    while(rahor.get_life() > 0 && player_character[0]->get_life() > 0) {
        ui_character();
        cout << "1/ Introducing\n";
        cout << "2/ Fist attack\n";
        cout << "3/ Dodge\n";
        cout << endl;
        cin >> choice;
        system("clear");

        if(choice == "1")
            choice_convert = '1';
        else if(choice == "2")
            choice_convert = '2';
        else if(choice == "3")
            choice_convert = '3';
        else if(choice == "painkiller") {
            choice_convert = 'C';
            cout << "Cheat activated: set player's life at 100hp\n";
            score -= 100;
            player_character[0]->set_life(100);
        }
        else if(choice == "progamersmove") {
            choice_convert = 'C';
            cout << "Cheat activated: kills Rahor instantly\n";
            score -= 1000;
            rahor.set_life(0);
        }
        else if(choice == "leavemealone") {
            choice_convert = 'C';
            cout << "Cheat activated: kills the player instantly\n";
            score -= 100;
            player_character[0]->set_life(0);
            //anim("                      You died!\n", 20);
            //cout << endl;
            rahor.set_life(100);
        }
        else if(choice == "notfair") {
            choice_convert = 'C';
            cout << "Cheat activated: increases Rahor's health by 50hp\n";
            score -= 10;
            int rahor_hp = rahor.get_life();
            rahor_hp += 50;
            rahor.set_life(rahor_hp);
        }
        else if(choice == "oof") {
            choice_convert = 'C';
            cout << "Cheat activated: decrease player's heath by 10hp\n";
            score -= 10;
            int player_hp = player_character[0]->get_life();
            player_hp -= 10;
            player_character[0]->set_life(player_hp);
        }

        switch(choice_convert) {
            case '1': {
                player_character[0]->introducing();
                score += 5;
                    break;
            }

            case '2': {
                player_character[0]->fist_attack(rahor);
                rahor.dodging();    // work in progress AI
                score += 50;
                    break;
            }

            case '3': {
                player_character[0]->dodging();
                rahor.fist_attack(*player_character[0]);    // work in progress AI
                score += 15;
                    break;
            }

            case 'C': {
                // to remove the message printed on the default case
                break;
            }

            default: {
                cout << "You can't do that!\n" << endl;
                score -= 20;
            }
        }
    }

    if(rahor.get_life() <= 0) {
        score += 70;
        anim("Congratulation! You've beat Rahor!\n", 20);
        anim("              Score: ", 20);
        cout << score << endl;
        anim("Press [ENTER] to continue...\n", 20);
        cin.ignore();
        cin.ignore();
        rahor.set_life(100);    // to be able to play again
        score = 0;
        system("clear");
    }
    if(player_character[0]->get_life() <= 0) {
        anim("              You died!\n", 20);
        anim("              Score: ", 20);
        cout << score << endl;
        anim("Press [ENTER] to continue...\n", 20);
        cin.ignore();
        cin.ignore();
        rahor.set_life(100);    // to be able to play again
        score = 0;
        system("clear");
    }
}

void gameplay_magician()
{
    //evil_magician rahor = new evil_magician("Rahor", 100);

    string choice;   // to be able to enter cheat codes
    char choice_convert;    // convert the choice from string to char

    while(rahor.get_life() > 0 && player_magician[0]->get_life() > 0) {
        ui_magician();
        cout << "1/ Introducing\n";
        cout << "2/ Fist attack\n";
        cout << "3/ Dodge\n";
        cout << "4/ Drink a potion\n";
        cout << "5/ Fire ball\n";
        cout << endl;
        cin >> choice;
        system("clear");

        if(choice == "1")
            choice_convert = '1';
        else if(choice == "2")
            choice_convert = '2';
        else if(choice == "3")
            choice_convert = '3';
        else if(choice == "4")
            choice_convert = '4';
        else if(choice == "5")
            choice_convert = '5';
        else if(choice == "painkiller") {
            choice_convert = 'C';
            cout << "Cheat activated: set player's life at 100hp\n";
            score -= 100;
            player_magician[0]->set_life(100);
        }
        else if(choice == "progamersmove") {
            choice_convert = 'C';
            cout << "Cheat activated: kills Rahor instantly\n";
            score -= 1000;
            rahor.set_life(0);
        }
        else if(choice == "drpepper") {
            choice_convert = 'C';
            cout << "Cheat activated: set magic level to 100mp\n";
            score -= 100;
            player_magician[0]->set_magic_level(100);
        }
        else if(choice == "leavemealone") {
            choice_convert = 'C';
            cout << "Cheat activated: kills the player instantly\n";
            score -= 100;
            player_magician[0]->set_life(0);
            //anim("                      You died!\n", 20);
            //cout << endl;
            rahor.set_life(100);
        }
        else if(choice == "notfair") {
            choice_convert = 'C';
            cout << "Cheat activated: increases Rahor's health by 50hp\n";
            score -= 10;
            int rahor_hp = rahor.get_life();
            rahor_hp += 50;
            rahor.set_life(rahor_hp);
        }
        else if(choice == "oof") {
            choice_convert = 'C';
            cout << "Cheat activated: decrease player's heath by 10hp\n";
            score -= 10;
            int player_hp = player_magician[0]->get_life();
            player_hp -= 10;
            player_magician[0]->set_life(player_hp);
        }

        switch(choice_convert) {
            case '1': {
                player_magician[0]->introducing();
                score += 5;
                    break;
            }

            case '2': {
                player_magician[0]->fist_attack(rahor);
                score += 50;
                    break;
            }

            case '3': {
                player_magician[0]->dodging();
                score += 15;
                    break;
            }

            case '4': {
                player_magician[0]->drink_potion();
                score += 2;
                    break;
            }

            case '5': {
                player_magician[0]->fire_ball(rahor);
                score += 25;
                    break;
            }

            case 'C': {
                // to remove the message printed on the default case
                break;
            }

            default: {
                cout << "You can't do that!\n" << endl;
                score -= 20;
            }
        }
    }

    test:
    if(rahor.get_life() <= 0) {
        score += 70;
        anim("Congratulation! You've beat Rahor!\n", 20);
        anim("              Score: ", 20);
        cout << score << endl;
        anim("Press [ENTER] to continue...\n", 20);
        cin.ignore();
        cin.ignore();
        rahor.set_life(100);    // to be able to play again
        score = 0;
        system("clear");
    }
    if(player_magician[0]->get_life() <= 0) {
        anim("              You died!\n", 20);
        anim("              Score: ", 20);
        cout << score << endl;
        anim("Press [ENTER] to continue...\n", 20);
        cin.ignore();
        cin.ignore();
        rahor.set_life(100);    // to be able to play again
        score = 0;
        system("clear");
    }
}

void gameplay_warrior()
{
    //evil_magician rahor = new evil_magician("Rahor", 100);

    string choice;   // to be able to enter cheat codes
    char choice_convert;    // convert the choice from string to char

    while(rahor.get_life() > 0 && player_warrior[0]->get_life() > 0) {
        ui_warrior();
        cout << "1/ Introducing\n";
        cout << "2/ Fist attack\n";
        cout << "3/ Dodge\n";
        cout << "4/ Punching with a hammer like a deaf\n";
        cout << endl;
        cin >> choice;
        system("clear");

        if(choice == "1")
            choice_convert = '1';
        else if(choice == "2")
            choice_convert = '2';
        else if(choice == "3")
            choice_convert = '3';
        else if(choice == "4")
            choice_convert = '4';
        else if(choice == "painkiller") {
            choice_convert = 'C';
            cout << "Cheat activated: set player's life at 100hp\n";
            score -= 100;
            player_character[0]->set_life(100);
        }
        else if(choice == "progamersmove") {
            choice_convert = 'C';
            cout << "Cheat activated: kills Rahor instantly\n";
            score -= 1000;
            rahor.set_life(0);
        }
        else if(choice == "leavemealone") {
            choice_convert = 'C';
            cout << "Cheat activated: kills the player instantly\n";
            score -= 100;
            player_character[0]->set_life(0);
            //anim("                      You died!\n", 20);
            //cout << endl;
            rahor.set_life(100);
        }
        else if(choice == "notfair") {
            choice_convert = 'C';
            cout << "Cheat activated: increases Rahor's health by 50hp\n";
            score -= 10;
            int rahor_hp = rahor.get_life();
            rahor_hp += 50;
            rahor.set_life(rahor_hp);
        }
        else if(choice == "oof") {
            choice_convert = 'C';
            cout << "Cheat activated: decrease player's heath by 10hp\n";
            score -= 10;
            int player_hp = player_warrior[0]->get_life();
            player_hp -= 10;
            player_warrior[0]->set_life(player_hp);
        }

        switch(choice_convert) {
            case '1': {
                player_warrior[0]->introducing();
                score += 5;
                    break;
            }

            case '2': {
                player_warrior[0]->fist_attack(rahor);
                score += 50;
                    break;
            }

            case '3': {
                player_warrior[0]->dodging();
                score += 15;
                    break;
            }

            case '4': {
                player_warrior[0]->punching_with_hammer_like_a_deaf(rahor);
                score +=25;
                    break;
            }

            case 'C': {
                // to remove the message printed on the default case
                break;
            }

            default: {
                cout << "You can't do that!\n" << endl;
                score -= 20;
            }
        }
    }

    if(rahor.get_life() <= 0) {
        score += 70;
        anim("Congratulation! You've beat Rahor!\n", 20);
        anim("              Score: ", 20);
        cout << score << endl;
        anim("Press [ENTER] to continue...\n", 20);
        cin.ignore();
        cin.ignore();
        rahor.set_life(100);    // to be able to play again
        score = 0;
        system("clear");
    }
    if(player_warrior[0]->get_life() <= 0) {
        anim("              You died!\n", 20);
        anim("              Score: ", 20);
        cout << score << endl;
        anim("Press [ENTER] to continue...\n", 20);
        cin.ignore();
        cin.ignore();
        rahor.set_life(100);    // to be able to play again
        score = 0;
        system("clear");
    }
}

void gameplay_evil_magician()
{
    //evil_magician rahor = new evil_magician("Rahor", 100);

    string choice;   // to be able to enter cheat codes
    char choice_convert;    // convert the choice from string to char

    while(rahor.get_life() > 0 && player_evil_magician[0]->get_life() > 0) {
        ui_evil_magician();
        cout << "1/ Introducing\n";
        cout << "2/ Fist attack\n";
        cout << "3/ Dodge\n";
        cout << "4/ Drink a potion\n";
        cout << "5/ Fire ball\n";
        cout << "6/ Attack (witchery)\n";
        cout << endl;
        cin >> choice;
        system("clear");

        if(choice == "1")
            choice_convert = '1';
        else if(choice == "2")
            choice_convert = '2';
        else if(choice == "3")
            choice_convert = '3';
        else if(choice == "4")
            choice_convert = '4';
        else if(choice == "5")
            choice_convert = '5';
        else if(choice == "6")
            choice_convert = '6';
        else if(choice == "painkiller") {
            choice_convert = 'C';
            cout << "Cheat activated: set player's life at 100hp\n";
            score -= 100;
            player_evil_magician[0]->set_life(100);
        }
        else if(choice == "progamersmove") {
            choice_convert = 'C';
            cout << "Cheat activated: kills Rahor instantly\n";
            score -= 1000;
            rahor.set_life(0);
        }
        else if(choice == "drpepper") {
            choice_convert = 'C';
            cout << "Cheat activated: set magic level to 100mp\n";
            score -= 100;
            player_evil_magician[0]->set_magic_level(100);
        }
        else if(choice == "leavemealone") {
            choice_convert = 'C';
            cout << "Cheat activated: kills the player instantly\n";
            score -= 100;
            player_evil_magician[0]->set_life(0);
            //anim("                      You died!\n", 20);
            //cout << endl;
            rahor.set_life(100);
        }
        else if(choice == "notfair") {
            choice_convert = 'C';
            cout << "Cheat activated: increases Rahor's health by 50hp\n";
            score -= 10;
            int rahor_hp = rahor.get_life();
            rahor_hp += 50;
            rahor.set_life(rahor_hp);
        }
        else if(choice == "oof") {
            choice_convert = 'C';
            cout << "Cheat activated: decrease player's heath by 10hp\n";
            score -= 10;
            int player_hp = player_evil_magician[0]->get_life();
            player_hp -= 10;
            player_evil_magician[0]->set_life(player_hp);
        }

        switch(choice_convert) {
            case '1': {
                player_evil_magician[0]->introducing();
                score += 5;
                    break;
            }

            case '2': {
                player_evil_magician[0]->fist_attack(rahor);
                score += 50;
                    break;
            }

            case '3': {
                player_evil_magician[0]->dodging();
                score += 15;
                    break;
            }

            case '4': {
                player_evil_magician[0]->drink_potion();
                score += 2;
                    break;
            }

            case '5': {
                player_evil_magician[0]->fire_ball(rahor);
                score += 25;
                    break;
            }

            case '6': {
                player_evil_magician[0]->attack(rahor);
                score += 32;
                    break;
            }
            case 'C': {
                // to remove the message printed on the default case
                break;
            }

            default: {
                cout << "You can't do that!\n" << endl;
                score -= 20;
            }
        }
    }

    if(rahor.get_life() <= 0) {
        score += 70;
        anim("Congratulation! You've beat Rahor!\n", 20);
        anim("              Score: ", 20);
        cout << score << endl;
        anim("Press [ENTER] to continue...\n", 20);
        cin.ignore();
        cin.ignore();
        rahor.set_life(100);    // to be able to play again
        score = 0;
        system("clear");
    }
    if(player_evil_magician[0]->get_life() <= 0) {
        anim("              You died!\n", 20);
        anim("              Score: ", 20);
        cout << score << endl;
        anim("Press [ENTER] to continue...\n", 20);
        cin.ignore();
        cin.ignore();
        rahor.set_life(100);    // to be able to play again
        score = 0;
        system("clear");
    }

}

void gameplay_white_magician()
{
    //evil_magician rahor = new evil_magician("Rahor", 100);

    string choice;   // to be able to enter cheat codes
    char choice_convert;    // convert the choice from string to char

    while(rahor.get_life() > 0 && player_white_magician[0]->get_life() > 0) {
        ui_white_magician();
        cout << "1/ Introducing\n";
        cout << "2/ Fist attack\n";
        cout << "3/ Dodge\n";
        cout << "4/ Drink a potion\n";
        cout << "5/ Fire ball\n";
        cout << "6/ Heal\n";
        cout << endl;
        cin >> choice;
        system("clear");

        if(choice == "1")
            choice_convert = '1';
        else if(choice == "2")
            choice_convert = '2';
        else if(choice == "3")
            choice_convert = '3';
        else if(choice == "4")
            choice_convert = '4';
        else if(choice == "5")
            choice_convert = '5';
        else if(choice == "6")
            choice_convert = '6';
        else if(choice == "painkiller") {
            choice_convert = 'C';
            cout << "Cheat activated: set player's life at 100hp\n";
            score -= 100;
            player_white_magician[0]->set_life(100);
        }
        else if(choice == "progamersmove") {
            choice_convert = 'C';
            cout << "Cheat activated: kills Rahor instantly\n";
            score -= 1000;
            rahor.set_life(0);
        }
        else if(choice == "drpepper") {
            choice_convert = 'C';
            cout << "Cheat activated: set magic level to 100mp\n";
            score -= 100;
            player_white_magician[0]->set_magic_level(100);
        }
        else if(choice == "leavemealone") {
            choice_convert = 'C';
            cout << "Cheat activated: kills the player instantly\n";
            score -= 100;
            player_white_magician[0]->set_life(0);
            //anim("                      You died!\n", 20);
            //cout << endl;
            rahor.set_life(100);
        }
        else if(choice == "notfair") {
            choice_convert = 'C';
            cout << "Cheat activated: increases Rahor's health by 50hp\n";
            score -= 10;
            int rahor_hp = rahor.get_life();
            rahor_hp += 50;
            rahor.set_life(rahor_hp);
        }
        else if(choice == "oof") {
            choice_convert = 'C';
            cout << "Cheat activated: decrease player's heath by 10hp\n";
            score -= 10;
            int player_hp = player_white_magician[0]->get_life();
            player_hp -= 10;
            player_white_magician[0]->set_life(player_hp);
        }

        switch(choice_convert) {
            case '1': {
                player_white_magician[0]->introducing();
                score += 5;
                    break;
            }

            case '2': {
                player_white_magician[0]->fist_attack(rahor);
                score += 50;
                    break;
            }

            case '3': {
                player_white_magician[0]->dodging();
                score += 15;
                    break;
            }

            case '4': {
                player_white_magician[0]->drink_potion();
                score += 2;
                    break;
            }

            case '5': {
                player_white_magician[0]->fire_ball(rahor);
                score += 25;
                    break;
            }

            case '6': {
                player_white_magician[0]->heal(*player_white_magician[0]);
                score -= 10;
                    break;
            }

            case 'C': {
                // to remove the message printed on the default case
                break;
            }

            default: {
                cout << "You can't do that!\n" << endl;
                score -= 20;
            }
        }
    }

    if(rahor.get_life() <= 0) {
        score += 70;
        anim("Congratulation! You've beat Rahor!\n", 20);
        anim("              Score: ", 20);
        cout << score << endl;
        anim("Press [ENTER] to continue...\n", 20);
        cin.ignore();
        cin.ignore();
        rahor.set_life(100);    // to be able to play again
        score = 0;
        system("clear");
    }
    if(player_white_magician[0]->get_life() <= 0) {
        anim("              You died!\n", 20);
        anim("              Score: ", 20);
        cout << score << endl;
        anim("Press [ENTER] to continue...\n", 20);
        cin.ignore();
        cin.ignore();
        rahor.set_life(100);    // to be able to play again
        score = 0;
        system("clear");
    }

}

void credit()
{
    cout << "--------------------------- CREDIT ---------------------------\n";
    cout << "----------------- UNDISCOVERED: Rahor's Glory ----------------\n";
    cout << "                                      ";
    anim("    version: alpha 2.7.9\n", 20);
    cout << endl;
    cout << "Producer: Raphaël" << endl;
    cout << "Designed by: Raphaël" << endl;
    cout << "Tested by: Pierre & Raphaël" << endl;
    cout << "Version: alpha 2.7.9" << endl;
    cout << "Licensed under: GNU GPLv3" << endl;
    cout << endl;
    cout << "RHE(R) UNDISCOVERED: Rahor's Glory" << endl;
    cout << "Copyright (C) 2020  Raphaël Liyanage" << endl;
    cout << "This program comes with ABSOLUTELY NO WARRANTY. "<< endl;
    cout << "This is free software, and you are welcome to" << endl;
    cout << "redistribute it under certain conditions;" << endl;
    cout << "visit <https://www.gnu.org/licenses/> for details." << endl;
    cout << endl;
    cout << "Press [ENTER] to continue" << endl;
    cin.ignore();
    cin.ignore();
    system("clear");
}

void ui_character()
{
    int player_hp = player_character[0]->get_life();
    int enemy_hp = rahor.get_life();

    cout << endl;
    cout << endl;
    cout << player_character[0]->get_name() << "'s HP: " << player_hp << endl;
    cout << rahor.get_name() << "'s HP: " << enemy_hp << endl;
    cout << endl;
    cout << endl;
}

void ui_magician()
{
    int player_hp = player_magician[0]->get_life();
    int enemy_hp = rahor.get_life();
    int magic_lvl = player_magician[0]->get_magic_level();

    cout << endl;
    cout << endl;
    cout << player_magician[0]->get_name() << "'s HP: " << player_hp << endl;
    cout << player_magician[0]->get_name() << "'s Magic Level: " << magic_lvl;
    cout << endl;
    cout << rahor.get_name() << "'s HP: " << enemy_hp << endl;
    cout << endl;
    cout << endl;
}

void ui_warrior()
{
    int player_hp = player_warrior[0]->get_life();
    int enemy_hp = rahor.get_life();

    cout << endl;
    cout << endl;
    cout << player_warrior[0]->get_name() << "'s HP: " << player_hp << endl;
    cout << rahor.get_name() << "'s HP: " << enemy_hp << endl;
    cout << endl;
    cout << endl;
}

void ui_evil_magician()
{
    int player_hp = player_evil_magician[0]->get_life();
    int enemy_hp = rahor.get_life();
    int magic_lvl = player_evil_magician[0]->get_magic_level();

    cout << endl;
    cout << endl;
    cout << player_evil_magician[0]->get_name() << "'s HP: " << player_hp;
    cout << endl;
    cout << player_evil_magician[0]->get_name() << "'s Magic Level: ";
    cout << magic_lvl << endl;
    cout << rahor.get_name() << "'s HP: " << enemy_hp << endl;
    cout << endl;
    cout << endl;
}

void ui_white_magician()
{
    int player_hp = player_white_magician[0]->get_life();
    int enemy_hp = rahor.get_life();
    int magic_lvl = player_white_magician[0]->get_magic_level();

    cout << endl;
    cout << endl;
    cout << player_white_magician[0]->get_name() << "'s HP: " << player_hp;
    cout << endl;
    cout << player_white_magician[0]->get_name() << "'s Magic Level: ";
    cout << magic_lvl << endl;
    cout << rahor.get_name() << "'s HP: " << enemy_hp << endl;
    cout << endl;
    cout << endl;
}
