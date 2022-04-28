#include "birokrat.h"
#include <iostream>
using namespace std;

int main() {
    cout << "Push neverheadbefore"<<endl;
  priority_queue<int> prioQueue;
  for (int i = 0; i < 50; i++) {
    prioQueue.push(rand());
  }
  cetak(prioQueue);
  cout << endl;

    cout << "Pop neverheadbefore"<<endl;
  prioQueue.push(rand());
  prioQueue.pop();
    cetak(prioQueue);
}