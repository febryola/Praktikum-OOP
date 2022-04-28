// Nama : Febryola Kurnia Putri
// NIM  : 13520140
// Kelas : K02
// Topik : Praktikum 2

#include "Zombie.hpp"
#include <iostream>
using namespace std;

Zombie::Zombie(int _stamina) : Undead(_stamina){

}

void Zombie::attack(Player& player){
    if (this->stamina) {
        this->stamina--;
        if(player.getHealth() == 0){
            cout << "nom nom nom" << endl;
        } else {
            player.setHealth(max(player.getHealth() - 3, 0));
        }
    } else {
        cout << "oof" << endl;
    }
}