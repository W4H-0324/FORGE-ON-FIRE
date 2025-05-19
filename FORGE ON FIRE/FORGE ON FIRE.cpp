#include <iostream>
#include <limits> 
#include "Materials.h"
#include "Weapons.h"
using namespace std;

#define RESET       "\033[0m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define YELLOW      "\033[33m"
#define BLUE        "\033[34m"
#define MAGENTA     "\033[35m"
#define CYAN        "\033[36m"
#define BOLDWHITE   "\033[1m\033[37m"

#define BG_RED      "\033[41m"
#define BG_GREEN    "\033[42m"

unique_ptr<Material> ChooseMaterial(int choice) {
    switch (choice) {
    case 1: return make_unique<Diamond>();
    case 2: return make_unique<Gold>();
    case 3: return make_unique<Iron>();
    case 4: return make_unique<Wood>();
    default: return nullptr;
    }
}

unique_ptr<Weapon> ChooseWeapon(int choice, unique_ptr<Material> mat) {
    switch (choice) {
    case 1: return make_unique<Sword>(move(mat));
    case 2: return make_unique<Spear>(move(mat));
    case 3: return make_unique<Axe>(move(mat));
    case 4: return make_unique<Claymore>(move(mat));
    case 5: return make_unique<Ninjato>(move(mat));
    case 6: return make_unique<Katana>(move(mat));
    default: return nullptr;
    }
}


void ClearInput() {
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

int main() {
    cout << BG_RED << BOLDWHITE << "-----FORGED ON FIRE-----" << RESET << "\n";

    bool running = true;
    while (running) {
        int matChoice;
        unique_ptr<Material> material;


        while (true) {
            cout << CYAN << "\nMaterials:\n" << RESET;
            cout << YELLOW << "1. Diamond\n2. Gold\n3. Iron\n4. Wood\n" << RESET;
            cout << GREEN << "Choose Material (1-4): " << RESET;
            cin >> matChoice;

            if (cin.fail()) {
                cout << RED << "Invalid input. Please enter a number.\n" << RESET;
                ClearInput();
                continue;
            }

            material = ChooseMaterial(matChoice);
            if (material) break;

            cout << RED << "Invalid material choice. Try again.\n" << RESET;
        }

        int wepChoice;
        unique_ptr<Weapon> weapon;


        while (true) {
            cout << CYAN << "\nWeapons:\n" << RESET;
            cout << YELLOW << "1. Sword\n2. Spear\n3. Axe\n4. Claymore\n5. Ninjato\n6. Katana\n" << RESET;
            cout << GREEN << "Choose a Weapon (1-6): " << RESET;
            cin >> wepChoice;

            if (cin.fail()) {
                cout << RED << "Invalid input. Please enter a number.\n" << RESET;
                ClearInput();
                continue;
            }

            weapon = ChooseWeapon(wepChoice, move(material));
            if (weapon) break;

            cout << RED << "Invalid weapon choice. Try again.\n" << RESET;
        }


        cout << BG_GREEN << BOLDWHITE << "\nWeapon Crafted: \n" << RESET;
        cout << "Material Used: " << MAGENTA << weapon->matName() << RESET << "\n";
        cout << "Weapon Type: " << MAGENTA << weapon->wepName() << RESET << "\n";
        cout << "Damage: " << BLUE << weapon->totalDmg() << RESET << "\n";
        cout << "Durability: " << BLUE << weapon->totalDur() << RESET << endl;


        char again;
        while (true) {
            cout << CYAN << "\nWould you like to forge another weapon? (y/n): " << RESET;
            cin >> again;

            if (cin.fail()) {
                ClearInput();
                continue;
            }

            if (again == 'n' || again == 'N') {
                running = false;
                break;
            }
            else if (again == 'y' || again == 'Y') {
                break;
            }
            else {
                cout << RED << "Please enter 'y' or 'n'.\n" << RESET;
            }
        }
    }

    cout << GREEN << "\nThank you for using Forged on Fire! Goodbye.\n" << RESET;
    return 0;
}
