#include<iostream>
#include "Dugum.hpp"
#include "BagliListe.hpp"
#include <iomanip>

using namespace std;

int indeks;

int main()
{
   BagliListe *liste = new BagliListe();
cout<<*liste;
   for(int i=0;i<10;i++)
    liste->ekle(i*11);

    cout<<*liste;

    liste->cikar();
    cout<<*liste;
    liste->ekle(123);
    cout<<*liste;
    liste->ekle(10,456);
    cout<<*liste;
    liste->ekle(789);
    cout<<*liste;

    liste->cikar(0);
    cout<<*liste;
    liste->ekle(0,999);
    cout<<*liste;
/*
    liste->ekle(2,99);
    cout<<*liste;
    
    cout<<*liste;
    liste->ekle(444);
    cout<<*liste;
*/
}

