#include<iostream>
#include<iomanip>
#include "IkiYonluBagliListe.hpp"

using namespace std;

int main()
{
    Liste* liste = new Liste();

    liste->onuneEkle(3,99);
    liste->ekle(11);
    
    cout<<*liste;   
    
    liste->ekle(22);

    cout<<*liste;   

    liste->ekle(33);
    liste->ekle(44);  
 
    cout<<*liste;  

    delete liste; 

    return 0;
}