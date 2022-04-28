#include <iostream>
using namespace std;
#include "Wallet.cpp"

int main(){
    Wallet *w0 = new Wallet();
    Wallet *w1 = new Wallet(1,10000);
    (*w1).checkBalance();
    Wallet *w2 = new Wallet(2,8000);
    (*w2) = (*w1);
    (*w1).addBalance(5000);
    (*w0).addBalance(3000);
    (*w0).checkBalance();
    (*w2).checkBalance();
    (*w1).checkBalance();
    delete w1;
    delete w0;
    delete w2;
}