// Nama : Febryola Kurnia Putri
// NIM  : 13520140
// Kelas : K02
// Topik : Praktikum 2

#include <iostream>
#include <cmath>
#include "Asset.hpp"
#include "AppreciatingAsset.hpp"
using namespace std;

double AppreciatingAsset::getValue(int years) {
  return (this->x->getValue(years))*pow(1+this->rate, years);
}