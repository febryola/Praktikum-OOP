//File Lampu.h
#ifndef _LAMPU_H_
#define _LAMPU_H_

class Lampu {
    private:
        int no_lamp;
        bool nyala_lampu;
    public:
        Lampu();
        Lampu(int Int, bool Bool);
        Lampu(const Lampu&);
        void set_nyala();
        void set_mati();
        bool get_info();
        void PrintInfo() const; 
};
#endif
