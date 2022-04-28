#include <iostream>

#include "CWTime.h"

using namespace std;

#define DEFAULT_SIZE 100

CarWash::CarWash() : CarWash(DEFAULT_SIZE) {}

CarWash::CarWash(int _size) {
  this->tail = 0;
  this->size = _size;
  this->Array = new CWTime[_size];
}

CarWash::CarWash(const CarWash& C) {
  this->tail = C.tail;
  this->size = C.size;
  this->Array = new CWTime[C.size];

  for (int i = 0; i < C.tail; i++) {
    this->Array[i] = C.Array[i];
  }
}

CarWash::~CarWash() { delete[] this->Array; }

CarWash& CarWash::operator=(const CarWash& C) {
  this->tail = C.tail;
  this->size = C.size;
  this->Array = new CWTime[C.size];

  for (int i = 0; i < C.tail; i++) {
    this->Array[i] = C.Array[i];
  }

  return (*this);
}

CarWash& CarWash::operator<<(const CWTime& Ct) {
  this->Array[this->tail] = Ct;
  this->tail++;

  return *this;
}

void CarWash::operator>>(CWTime& Ct) {
  Ct = this->Array[0];

  for (int i = 0; i < this->tail - 1; i++) {
    this->Array[i] = this->Array[i + 1];
  }

  this->tail--;
}

long CarWash::BiayaCuci(CWTime& Ct) {
  if (Ct.get_service() == "automatic") {
    return Ct.InMinutes() * 2000 + 20000;
  } else {
    return Ct.InMinutes() * 2000 + 50000;
  }
}
