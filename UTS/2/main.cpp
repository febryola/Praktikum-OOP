#include "Queue.h"
#include <iostream>
using namespace std;

int main() {
  Queue<int> queueInt;
  Queue<float> queueFloat;
  Queue<Mobil> queueMobil;
  try {
    cout << "Array isi: " << queueInt << endl;
    queueInt.enqueue(8);
    cout << "Array isi: " << queueInt << endl;
    queueInt.enqueue(6);
    cout << "Array isi: " << queueInt << endl;
    queueInt.enqueue(4);
    cout << "Array isi: " << queueInt << endl;
  } catch (QueueException* eror) {
    cout << eror->what() << endl;
  }
    try {
    cout << "Array isi: " << queueInt << endl;
    queueInt.dequeue();
  } catch (QueueException* eror) {
    cout << eror->what() << endl;
  }

  //buat yg integer
  try {
    int nilai = queueInt.dequeue();
    cout << "Nilai : " << nilai << endl << "Array isi : " << queueInt << endl;
    nilai = queueInt.dequeue();
    cout << "Nilai : " << nilai << endl << "Array isi : " << queueInt << endl;
    queueInt.enqueue(8);
    cout << "Array isi : " << queueInt << endl;
  } catch (QueueException* eror) {
      cout << eror->what() << endl;
  }
  //buat yang mobil
  queueMobil.enqueue(Mobil("ayla",2002));
  queueMobil.enqueue(Mobil("alphard",2007));

  for (int i = 0; i < 2; i++) {
    Mobil mob = queueMobil.dequeue();
    cout << mob.getName() << endl;
    cout << mob.getTahun() << endl;
  }
  queueFloat.enqueue(19.7);
  cout << queueFloat << endl;
  return 0;
}