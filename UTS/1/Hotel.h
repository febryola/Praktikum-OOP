// Class Hotel
// File: Hotel.h
#ifndef HOTEL_H
#define HOTEL_H
#define CURRENT_YEAR 2022
#include <string>
using namespace std;
class Hotel{
    protected:
    // Atribut
        string name;
        string bintang; //Melati; bintang_tiga; bintang_empat; bintang_lima
        int openYear;
    public:
    // User-defined constructor: set nilai atribut berdasarkan nilai parameter masukan
    Hotel(string name, string bintang, int openYear);
    // Default constructor: set nilai atribut sbb:
    // name = "noname"; openYear = 1900; bintang = "none"
    Hotel();
    // Copy constructor
        //TIDAK PERLU
    // Destructor
        //TIDAK PERLU
    // Operator Assignment
        //TIDAK PERLU
    // ... set_name(...)
    void set_name(string name);
    // ... get_name()
    string get_name() const;
    // ... set_bintang(...)
    void set_bintang(string type);
    // ... get_bintang()
    string get_bintang() const;
    // ... get_age(), asumsikan tahun saat ini dapat diakses dengan makro CURRENT_YEAR
    int get_age() const;
    // ... displayInfo(): Mencetak nama, umur hotel, bintang, dan room_rate
    virtual void displayInfo() const;
    // ... rate(): menghitung biaya menginap sesuai dengan umur dan tergantung bintang hotel
    int rate() const;
};
#endif // HOTEL_H

//bintang_empat
class bintang_empat : public Hotel{
    private:
        int star;
    public:
        bintang_empat();
        bintang_empat(string name,int openYear);
        void set_star(int star);
        int get_star() const;
        void displayInfo() const;
};

//bintang_lima
class bintang_lima : public Hotel{
    private:
        int facility;
    public:
        bintang_lima();
        bintang_lima(string name,int openYear);
        void set_facility(int facility);
        int get_facility() const;
        void displayInfo() const;
        int calculate_facility() const;
};

