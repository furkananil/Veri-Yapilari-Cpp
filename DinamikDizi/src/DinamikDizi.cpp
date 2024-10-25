#include "DinamikDizi.hpp"
#include <iostream>

using namespace std;

DinamikDizi::DinamikDizi()
{
    elemanSayisi = 0;
    kapasite = 5;
    dizi = new int[kapasite];
}
void DinamikDizi::ekle(int yeniEleman)
{
    if(kapasite==elemanSayisi)
    {
        genislet();
    }
    dizi[elemanSayisi] = yeniEleman;
    elemanSayisi++;
}
void DinamikDizi::ekle(int index,int yeniEleman)
{
    if(index > elemanSayisi || index<0)
        return;
    if(index == elemanSayisi || elemanSayisi==kapasite)
        genislet();

    for(int i=elemanSayisi;i>index;i--)
        dizi[i] = dizi[i-1];

    dizi[index] = yeniEleman;
    elemanSayisi++;
    
}
void DinamikDizi::cikart(int index)
{
    if(index >= elemanSayisi)
        return;
    for(int i=index;i<elemanSayisi-1;i++)
    {
        dizi[index] = dizi[index+1];
    }
    elemanSayisi--;
}
void DinamikDizi::genislet()
{
    int yeniKapasite = kapasite*2;
    int* yeniDizi = new int[yeniKapasite];
    for(int i=0;i<elemanSayisi;i++)
    {
        yeniDizi[i] = dizi[i];
    }
    delete[] dizi;
    dizi = yeniDizi;
    kapasite = yeniKapasite;
}
ostream& operator<<(ostream& os,DinamikDizi& dizi)
{
    os <<"[";
    for(int i=0;i<dizi.elemanSayisi;i++)
    {
        os<<dizi.dizi[i];
        if(i<dizi.elemanSayisi-1)
        {
            os<<",";
        }
    }
    os<<"]"<<endl<<endl;
    return os;
}