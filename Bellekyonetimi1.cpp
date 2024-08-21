// Bellekyonetimi1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

class Silah {
public:
    Silah() {
        std::cout << "Olustu";
    }
    ~Silah() {
        std::cout << "Silindi";
    }
};


int main()
{

    //Silah* silah = new Silah;

    //delete silah;

    //int* a = new int;//new=int derken kapladığı alanı belirliyoruz
    //
    //*a = 10;//pointer ın işaret ettiği alanı değiştirmiş olduk
 
    //delete a;
 /*   Silah* silah;

    {
         silah = new Silah;
    }
    delete silah;
    std::cout << "Hello World";*/
    //Bellek Yönetimi 3
    //Bir dizi tanımlayıp elemanları kullanıcıdan alıp ekranda gösterdik
    int adet = 0;
    std::cout << "Dizi boyutu nedir?" << std::endl;
    std::cin >> adet;

    int* dizi = new int[adet];
    for (int i = 0; i < adet; i++) {
        std::cin >> dizi[i];

    }
    std::cout << "Girilen Elemanlar"<<std::endl;

    for (int i = 0; i < adet; i++) {
        std::cout << dizi[i];

    }
    delete[] dizi;//Dizinin tüm elemanlarını silmek için
}


