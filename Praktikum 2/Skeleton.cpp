// Nama : Febryola Kurnia Putri
// NIM  : 13520140
// Kelas : K02
// Topik : Praktikum 2

#include "Skeleton.hpp"
#include <iostream>
using namespace std;

Skeleton::Skeleton(int _stamina, int arrow) : Undead(_stamina){
    this->arrow = arrow;
}

void Skeleton::attack(Player& player){
    if (this->stamina >= 2 && this->arrow) {
        this->stamina -= 2;
        this->arrow--;
        player.setHealth(max(player.getHealth() - 4, 0));
    } else if (this->arrow == 0 || (this->stamina >0 && this->stamina<=1)) {
        Undead::attack(player);
        cout << "switching to your fists is faster than reloading" << endl;
    }   // else yang lain 
}