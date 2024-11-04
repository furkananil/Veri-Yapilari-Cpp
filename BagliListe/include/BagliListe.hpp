#ifndef BagliListe_hpp
#define BagliListe_hpp
#include "Dugum.hpp"
#include<iostream>
using namespace std;
class BagliListe
{
public:
    BagliListe();
    ~BagliListe();
    void ekle(int veri);
    void cikar();
    void cikar(int index);
    void ekle(int index,int veri);
    friend ostream& operator<<(ostream&os, BagliListe& liste);


    int elemanSayisi;
    Dugum* ilk;
    Dugum* son;
};


#endif