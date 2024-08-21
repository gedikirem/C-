// StandartKutuphane.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//namespace kullanımı

#include <iostream>

using namespace std;


namespace btk {//aynı isme sahip şeylerde hata vermesini önlemek için
    int sayi = 100;

    void merhaba(){}
}

//using namespace btk;

//
//void merhaba(){
//   cout << "test";
//}

void merhaba() {
   std:: cout << "test";
}



int main()
{
  // btk:: merhaba();
    merhaba();
   
}