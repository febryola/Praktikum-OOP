// Nama     : Febryola Kurnia Putri
// NIM      : 13520140
// Kelas    : K02
// Topik    : inheritance


#include "Bike.cpp"
#include "Vehicle.cpp"
#include "Car.cpp"

int main(){
	Car* c4 = new Car(4);
	Car* c10 = new Car(10);
	Bike *b2;
	b2 = new Bike();
	Vehicle* v2 = new Vehicle(*b2);
	delete b2;
	c10->Vehicle::drive();
	v2->clean();
	c4->drive();
	v2->park();
	delete c10;
	delete v2;
	delete c4;
}