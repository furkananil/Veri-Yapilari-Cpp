#include <iostream>
#include "DinamikDizi.hpp"

using namespace std;

int main()
{
    DinamikDizi dizi;

    dizi.ekle(1);
    dizi.ekle(2);
    dizi.ekle(3);
    dizi.ekle(4);
    dizi.ekle(5);

    cout<<dizi;

    dizi.ekle(6);

    cout<<dizi;

    dizi.ekle(3,8);

    cout<<dizi;

    dizi.cikart(3);

    cout<<dizi;
    return 0;
}