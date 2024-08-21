// Nesne3.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//Cast İşlemleri

#include <iostream>

class Silah {
protected:
    int deger;
public:
    std::string isim;
    int mermiKapasitesi;
    std::string renk;


};

class Ak47 :public Silah {//miras alma sytanx Ak47 Silah sınıfından mira aldı
public:

    bool seriTek;
    int kayisUzunluğu;
    bool durbun;

 

    void atesEt() {
        //
        deger = 20;//protected dedğimiz için deger i burda kullanabiliriz
    }


};

class Pistol :public Silah {
public:
    int kurmaKoluDeseni;
    void atesEt() {
        //
    }
};

class M1 :public Silah {
public:
    bool seriTek;
    int kayisUzunluğu;
    int kurmaPozisyonu;

    void atesEt() {
        //
    }
};

void goster(Silah* siahPtr) {
    std::cout << siahPtr->isim;

}


int main()
{
   /* Ak47 ak47;
    ak47.isim = "test";

    Silah* silahPtr = &ak47;
    silahPtr->isim = "merhaba";

    std::cout << ak47.isim;*/

    //Down casting
//    Ak47 ak47;
//    ak47.seriTek = 1;
//    ak47.isim = "123";
//
//    Silah* silahPtr = &ak47;
//;
//
//    Ak47* ak47Ptr = (Ak47*)silahPtr;//Burda verdiğimiz bellek adresini ak47 gibi ele al
//    std::cout << ak47Ptr->seriTek;


    //Cast Örneği
    Ak47 ak47;
    ak47.isim = "Ak47";
    goster(&ak47);

    Pistol pistol;
    pistol.isim = "Pistol";
    goster(&pistol);

    M1 m1;
    m1.isim = "M1";
    goster(&m1);

}

