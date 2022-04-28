#include <iostream>
using namespace std;
#define MAX_SIZE 3
template <class T>
class Queue {
 private:
  T* elements;
  int size;

 public:
  Queue() {
    this->elements = new T[MAX_SIZE];
    this->size = 0;
  }
  ~Queue() { delete[] elements; }

  void enqueue(T item) {
    if (this->size == 3) {
      throw new QueueExceptionFull();
      return;
    }

    this->elements[this->size] = item;
    this->size++;
  }

  T dequeue() {
    if (this->size == 0) {
      throw new QueueExceptionEmpty();
    }

    this->size--;
    T item = this->elements[0];

    for (int i = 0; i < this->size; i++) {
      this->elements[i] = this->elements[i + 1];
    }

    return item;
  }

  friend ostream& operator<<(ostream& os, const Queue& other) {
    os << "[";
    for (int i = 0; i < other.size; i++) {
      if (i > 0) {
        os << ",";
      }
      os << other.elements[i];
    }

    os << "]";

    return os;
  }
};

class QueueException {
 public:
  virtual string what() = 0;
};

class QueueExceptionEmpty : public QueueException {
 public:
  string what() { return "Queue telah kosong"; }
};

class QueueExceptionFull : public QueueException {
 public:
  string what() { return "Queue telah penuh"; }
};

class Mobil {
 private:
  string nama;
  int tahunKeluar;
 public:
  Mobil() { 
    this->nama = "Mitsubishi"; 
    this->tahunKeluar = 0;
  }
  Mobil(string nama, int tahunKeluar) { 
    this->nama = nama; 
    this->tahunKeluar = tahunKeluar;
  }
  void set_name(string nama, int tahunKeluar){
    this->nama = nama;
    this->tahunKeluar = tahunKeluar;
  }
  string getName() { 
    return this->nama; }
  int getTahun(){
    return this->tahunKeluar; 
  }
};

