// Diziler1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//Asıl amaç verileri tutabileceğimiz topku bir yerdir

#include <iostream>
#include<iterator>//for std::size

int main()
{
   // int puanlar[5]{10,20,30,100,70};
  /*  int puanlar[3]{10,20,30};
    puanlar[0]
        int* ptr = puanlar;
    puanlar[1]
        int* ptr = puanlar+1;
    puanlar[2]
        int* ptr = puanlar+2;*/
    int puanlar[3]{ 10,20,30 };
    int* ptr = puanlar+1;
    for (int i = 0;  i <3;  i++)
    {
        std::cout << *ptr;
    }
    std::cout << *ptr;//20 yazacak
  //  std::cout << puanlar;//listedeki ilk elemanın bellek adresini verir yani 10 un
 //   std::cout << puanlar[2];//Çıktı:30
}

