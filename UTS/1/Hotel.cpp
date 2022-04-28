#include <iostream>
using namespace std;
#include "Hotel.h"

Hotel :: Hotel(string name, string bintang, int openYear){
    this->name = name;
    this->bintang = bintang;
    this->openYear = openYear;
}

Hotel :: Hotel(){
    this->name = "noname";
    this->bintang = "none";
    this->openYear = 1900;
}
void Hotel :: set_name(string name){
    this->name=name;
}

string Hotel :: get_name() const{
    return this->name;
}

void Hotel :: set_bintang(string bintang){
    this->bintang=bintang;
}

string Hotel :: get_bintang() const{
    return this->bintang;
}

int Hotel :: get_age() const{
    return CURRENT_YEAR-this->openYear;
}

void Hotel :: displayInfo() const{
    cout << "Nama: " << this->name <<endl;
    cout << "bintang: " << this->bintang <<endl;
    cout << "Tahun: " << this->openYear <<endl;
    cout << "Rate: " << this->rate() <<endl;
}

int Hotel :: rate() const{
    int rate = 0;
    if (this->bintang == "Melati") {
        rate = this->get_age() * 30;
    } else if (this->bintang == "bintang_tiga") {
        rate = this->get_age() * 50;
    } else if (this->bintang == "bintang_empat") {
        rate = this->get_age() * 80;
    } else if (this->bintang == "bintang_lima") {
        rate = this->get_age() * 100;
    }
    return rate;
}

bintang_empat :: bintang_empat() : Hotel(){
    this->star=0;
}
bintang_empat :: bintang_empat(string name,int openYear) : Hotel(name, "bintang_empat", openYear){
    this->star=0;
}

void bintang_empat :: set_star(int star){
    this->star = star;
}
int bintang_empat :: get_star() const{
    return this->star;
}
void bintang_empat :: displayInfo() const{
    Hotel::displayInfo();
    cout << "Total Rate: " << this->rate()*this->star <<endl;
}

bintang_lima :: bintang_lima() : Hotel(){
    this->facility=0;
}
bintang_lima :: bintang_lima(string name,int openYear) : Hotel(name, "bintang_lima", openYear){
    this->facility=0;
}

void bintang_lima :: set_facility(int facility){
    this->facility = facility;
}
int bintang_lima :: get_facility() const{
    return this->facility;
}

int bintang_lima :: calculate_facility() const{
    int expense = this->facility * 100000;
    return expense;
}
void bintang_lima :: displayInfo() const{
    Hotel::displayInfo();
    cout << "Expense: " << this->calculate_facility() <<endl;
}