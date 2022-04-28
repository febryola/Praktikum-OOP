#include "CWTime.h"

#include <iostream>

using namespace std;

// Kelas CWTIme
CWTime::CWTime() : CWTime(0, 0, 0, "") {}

CWTime::CWTime(int h, int m, int s, string layanan) {
  this->jam=h;
  this->menit=m;
  this->detik= s;
  this->layanan = layanan;
}

CWTime::CWTime(int m, string l) : CWTime(0, m, 0, l) {}


float CWTime::InMinutes() const { return this->jam*60.0f+this->menit*1.0f+this->detik*0.01f; }

void CWTime::Print() const {
  int h = this->jam;
  int m = this->menit;
  int s = this->detik;

  if (h < 10) {
    cout << "Waktu pencucian 0" << h << ":";
  } else {
    cout << "Waktu pencucian " << h << ":";
  }

  if (m < 10) {
    cout << "0" << m << ":";
  } else {
    cout << m << ":";
  }

  if (s < 10) {
    cout << "0" << s << endl;
  } else {
    cout << s << endl;
  }

  cout << "Jenis layanan : " << this->layanan << endl;
}

string CWTime::get_service() { return this->layanan; }

// Kelas CarWash
