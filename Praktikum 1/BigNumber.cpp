#include "BigNumber.hpp"
#include <iostream>
using namespace std;

#include "BigNumber.hpp"
#include <iostream>
using namespace std;


const int BigNumber::max_digit = 20;

BigNumber::BigNumber() { this->digit = new int[BigNumber::max_digit]; }

BigNumber::BigNumber(int number) {
  this->digit = new int[BigNumber::max_digit];
  for (int i = 0; i < BigNumber::max_digit; i++) {
    this->digit[i] = number % 10;
    number /= 10;
  }
}

BigNumber::BigNumber(string aVeryBigNumber) {
  this->digit = new int[BigNumber::max_digit];
  int strSize = aVeryBigNumber.size();
  for (int i = 0; i < strSize; i++) {
    this->digit[i] = aVeryBigNumber[strSize - 1 - i] - '0';
  }
}

BigNumber::BigNumber(const BigNumber& bn) {
  this->digit = new int[BigNumber::max_digit];
  for (int i = 0; i < BigNumber::max_digit; i++) {
    this->digit[i] = bn[i];
  }
}

int BigNumber::getMaxDigit() { return BigNumber::max_digit; }

void BigNumber::setDigit(int i, int digit) { this->digit[i] = digit; }

int& BigNumber::operator[](int i) { return this->digit[i]; }

int BigNumber::operator[](int i) const { return this->digit[i]; }

BigNumber::~BigNumber() { delete[] this->digit; }

bool BigNumber::operator==(const BigNumber& other) {
  for (int i = BigNumber::getMaxDigit() - 1; i >= 0; i--) {
    if (other[i] != (*this)[i]) {
      return false;
    }
  }

  return true;
}

bool BigNumber::operator<(const BigNumber& other) {
  bool result = false;

  for (int i = 0; i < BigNumber::max_digit; i++) {
    if ((*this)[i] > other[i]) {
      result = false;
    } else if ((*this)[i] < other[i]) {
      result = true;
    }
  }

  return result;
}

bool BigNumber::operator>(const BigNumber& other) {
  bool result = false;

  for (int i = 0; i < BigNumber::max_digit; i++) {
    if ((*this)[i] < other[i]) {
      result = false;
    } else if ((*this)[i] > other[i]) {
      result = true;
    }
  }

  return result;
}

BigNumber BigNumber::operator+(const BigNumber& other) {
  BigNumber c;
  int simpan = 0;

  for (int i = 0; i < BigNumber::getMaxDigit(); i++) {
    int sum = 0;
    sum = (*this)[i] + other[i] + simpan;

    c[i] = sum % 10;
    simpan = sum / 10;
  }

  return c;
}