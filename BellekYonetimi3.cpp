// BellekYonetimi3.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//bellek sızıntısını önlemek için

#include <iostream>
class Silah {
public:
    int* a = nullptr;
    int* b = nullptr;

    Silah(int toplamaBirinciSayi,int toplamaikinciSayi) {
        a = new int;
        b = new int;

        *a = toplamaBirinciSayi;
        *b = toplamaikinciSayi;
    }
    ~Silah() {
        delete a;
        delete b;
        std::cout << "bitti";
    }
};

int main()
{
    Silah* silah = new Silah(10,10);
    delete silah;

    //Silah* silah=(Silah*)malloc(sizeof(Silah));
    //free(silah);//Çalışmaz

}


