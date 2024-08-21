// Nesne8.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//Statik
//Statik değişken hiçbir şeye ait değil,ortak kullanım gibi
#include <iostream>

class Kitap {
public:
    static  int adet;
    Kitap() {
        adet++;

    }
    static int get() {
        return adet;
    }

};
int Kitap::adet = 0;

//void test() {
//   static int a = 0;
//    a++;
//    std::cout << a << std::endl;
//
//}

int main()
{
    Kitap kitap;
    Kitap kitap1;
    Kitap kitap2;

   // kitap2.adet = 500;
 // std::cout<<kitap.adet;// 3 nesneyi de 60 yaptı , normalde her nesnein değişkeni kendine özeldir
    std::cout << Kitap::get();

}

