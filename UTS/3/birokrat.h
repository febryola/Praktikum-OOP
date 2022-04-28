#include <iostream>
#include <queue>
#include <cstdlib>
using namespace std;

template <class T>
void cetak(priority_queue<T> prio) {
  priority_queue<T> birokrat(prio);
  cout<<"[ ";
  while (!birokrat.empty()) {
    T element = birokrat.top();
    cout << element << " ";
    birokrat.pop();
  }
  cout <<"]"<< endl;
}
