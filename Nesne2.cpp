// Nesne2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//Kalıtım/Miras
//Kalıtım İle Kurucu Yıkıcı Methodlar

#include <iostream>

class Silah {
protected:
    int deger;
public:
    std::string isim;
 
    int mermiKapasitesi;
    std::string renk;
    
    Silah(){
        std::cout << "Silah Olustu";

    }

    ~Silah() {
        std::cout << "Silah Bitti";
    }

};

class Ak47 :public Silah {//miras alma sytanx Ak47 Silah sınıfından mira aldı
public:
  
    bool seriTek;
    int kayisUzunluğu;
    bool durbun;

    Ak47() {
        std::cout << "Ak47 Olustu";

    }

    ~Ak47() {
        std::cout << "Ak47 Bitti";
    }

    void atesEt(){
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

void test(Ak47& ak47,Ak47* ak47Ptr) {//referans istiyor ilki
    ak47.isim = "Test123";
}


int main()
{
 
 /*   Ak47 ak47;
    ak47.isim = " Ak47 Yeni Dizayn";*/
    //ak47.renk = "Black";

    /*M1 m1;
    m1.isim = "m3";*/
    //m1.renk = "Gray";

   /* Ak47 ak47;
    ak47.isim = "Test";

    Ak47* ak47Ptr = &ak47;
    ak47Ptr->isim = "Test tamam";
    ak47Ptr->atesEt();

    Ak47& ak47Ref = ak47;
    ak47.isim = "Test son";

    test(ak47,&ak47);*/

    //Ak47 ak47;
    //Ak47* ak47Ptr = &ak47;

    //std::cout << ak47Ptr;//0. bellek adresi gibi slayttaki

    //int sayi1 = 10;
    //int& deneme = sayi1;
    //deneme = 5;
    //std::cout << sayi1;

    Ak47 ak47;
    Ak47& ak47Ref = ak47;
    ak47Ref.isim = "Test";


}

