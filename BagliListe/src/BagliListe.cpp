#include "BagliListe.hpp"
BagliListe::BagliListe()
{
    ilk=son =0;
    elemanSayisi=0;
}
void BagliListe::ekle(int veri)
{
    Dugum* yeni =new Dugum(veri);
    elemanSayisi++;
    if(ilk==0)
    {
        ilk=yeni;
        son = yeni;
        return;
    }

    son->sonraki = yeni;
    son=yeni;
    
}
void BagliListe::cikar(int index)
{
    if(index<0||index>=elemanSayisi)
        return;
    elemanSayisi--;

    if(index==0)
    {
        Dugum* sil=ilk;
        ilk = ilk->sonraki;
        delete sil;
        return;
    }
    Dugum* gec=ilk;
    for(int i=0;i<index-1;i++)
        gec=gec->sonraki;


    Dugum* sil = gec->sonraki;
    gec->sonraki = gec->sonraki->sonraki;
    delete sil;
    
}
void BagliListe::ekle(int index,int veri)
{
    if(index<0||index>elemanSayisi)
        return;
    elemanSayisi++;
    Dugum* yeni = new Dugum(veri);
    if(index ==0)
    {
        yeni->sonraki = ilk;
        ilk=yeni;
        return;
    }
    Dugum* gec=ilk;
    for(int i=0;i<index-1;i++)
        gec=gec->sonraki;

    
    yeni->sonraki = gec->sonraki;
    gec->sonraki = yeni;
    if(elemanSayisi==index)
        son= yeni;
    


}
void BagliListe::cikar()
{
    if(ilk==0)  return;

    
    elemanSayisi--;

    if(ilk->sonraki==0)
    {
        delete ilk;
        ilk=0;
        return;
    }
    Dugum* gec = ilk;
    while(gec->sonraki->sonraki!=0)
    {
        gec=gec->sonraki;
    }

    delete gec->sonraki;
    gec->sonraki=0;
    son = gec;
}
ostream& operator<<(ostream& os, BagliListe& liste)
{
    Dugum* gec = liste.ilk;

    if(gec==0)
    {
        return os<<"Liste Bos"<<endl;
    }
    while(gec!=0)
    {
        os<<gec->veri;
        os<<" ";

        gec=gec->sonraki;
    }
    return os<<endl;
}


