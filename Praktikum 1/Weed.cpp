// Nama     : Febryola Kurnia Putri
// NIM      : 13520140
// Kelas    : K02
// Topik    : Weed


#include <iostream>
#include "Weed.hpp"
using namespace std;

Weed :: Weed(){
    this->many=1;
    cout<<"ini const"<<endl;
}       // Membuat Weed dengan jumlah kawanan 1
Weed :: Weed(int n){
    this->many=n;
    cout<<"ini const yg ada parameter"<<endl;
}  // Membuat Weed dengan jumlah kawanan n
Weed :: Weed(const Weed &b){
    this->many=b.many;
    cout<<"ini copy const"<<endl;
}
Weed :: ~Weed(){}

void Weed :: step(){
    for(int i=0;i<this->many;i++){
        cout<<"kresek...";
    }
    cout<<endl;
} // Menghasilkan bunyi "kresek..." berulang// sebanyak n kawanan
                  

