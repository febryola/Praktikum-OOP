#include "Hotel.h"
#include <iostream>
using namespace std;
int main() {
    Hotel *aston = new bintang_empat("Hotel Aston", 2010);
    Hotel *padma = new bintang_lima("Hotel Padma", 2000);
    // cetak semua Hotel dan informasi semua Hotel
    // [gunakan Hotel::displayInfo()]
    aston->displayInfo();
    padma->displayInfo();
    delete aston;
    delete padma;
}