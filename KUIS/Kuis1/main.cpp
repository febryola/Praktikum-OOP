#include <iostream>
#include "CWTime.cpp"
#include "CarWash.cpp"
using namespace std;

int main() {
  CarWash ss;
  ss << CWTime(15, "automatic");
  ss << CWTime(15, "handwash");
  ss << CWTime(7, "automatic");
  CWTime waktu;
  ss >> waktu;
  waktu.Print();
  cout <<ss.BiayaCuci(waktu) << endl << endl;
  ss>> waktu;
  waktu.Print();
  cout << ss.BiayaCuci(waktu) << endl << endl;
  ss >> waktu;
  waktu.Print();
  cout << ss.BiayaCuci(waktu) << endl << endl;
  waktu = CWTime(2, 3, 15, "automatic");
  waktu.Print();
  cout << ss.BiayaCuci(waktu) << endl;
  cout << waktu.InMinutes() << endl;
  return 0;
}