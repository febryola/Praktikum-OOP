// Nama : Febryola Kurnia Putri
// NIM  : 13520140
// Kelas : K02
// Topik : Praktikum 2

#include <iostream>
#include "Hero.hpp"
#include "Mage.hpp"
#include "Warrior.hpp"
#include "MagicWarrior.hpp"

using namespace std;

MagicWarrior::MagicWarrior(std::string name) : Hero(name) {}

void MagicWarrior::attack(Hero* h) {
    int power = getPower();
    (*h).setHealth((*h).getHealth()-power);
}
void MagicWarrior::heal(Hero* h) {
    int powerheal = getPower()/2;
    (*h).setHealth((*h).getHealth()+powerheal);
}
void MagicWarrior::magicAttack(Hero* h) {
    int target_health = (*h).getHealth();
    (*h).setHealth((*h).getHealth()-(target_health/2));
}
void MagicWarrior::powerUp() {
    int currPower = getPower();
    this->power = currPower*2;
}