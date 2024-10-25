#ifndef DINAMIKDIZI_HPP
#define DINAMIKDIZI_HPP

#include <iostream>
using namespace std;

class DinamikDizi
{
    private:
        int elemanSayisi;
        int kapasite;
        int* dizi;
    public:
        DinamikDizi();
        void ekle(int);
        void genislet();
        void cikart(int);
        void ekle(int,int);
        friend ostream& operator<<(ostream& os, DinamikDizi& dizi);
};
#endif