// Nama     : Febryola Kurnia Putri
// NIM      : 13520140
// Kelas    : K02
// Topik    : item


#include <iostream>
#include "Item.hpp"
using namespace std;

int Item::totalItems = 0;
int Item::totalRevenue = 0;
Item :: Item():serialNum(totalItems+1){
    this->stock=0;
    this->price=0;
    this->sold=0;
    totalItems++;
}
	/* Ctor default: stok adalah 0 dan harga barang adalah 0 */
	
Item :: Item(int stock, int price):serialNum(totalItems+1){
    this->stock=stock;
    this->price=price;
    this->sold=0;
    totalItems++;
}
Item :: Item(const Item&item):serialNum(item.getSerialNum()+1){
    this->stock=item.stock;
    this->price=item.price;
    this->sold=item.sold;
    totalItems++;
}
	/* cctor item, mengkopi seluruh atribut item, termasuk atribut sold */
Item :: ~Item(){}
	
int Item ::  getSerialNum() const{
    return this->serialNum;
}
int Item ::  getSold() const{
    return this->sold;
}
int Item ::  getPrice() const{
    return this->price;
}

void Item :: addStock(int addedStock){
    if(addedStock>=0){
        this->stock += addedStock;
    }
}
	/* Menambahkan stok item. Tidak akan bernilai negatif. */
void Item::sell(int num) {
  int numberSelled = num > this->stock ? this->stock : num;

  this->stock -= numberSelled;
  this->sold += numberSelled;
  Item::totalRevenue += numberSelled * this->price;
}
	/* Menjual item. Jika item tidak cukup, maka item terjual hanya sampai stok item habis */
void Item :: setPrice(int newPrice){
    this->price=newPrice;
}
