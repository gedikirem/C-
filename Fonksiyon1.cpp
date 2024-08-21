// Fonksiyon1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//Aşırı Yükleme

#include <iostream>
int topla(int sayi1, int sayi2) {
    std::cout << "int";
    return sayi1 + sayi2;
}
double topla(double sayi1, double sayi2) {
    std::cout << "double";
    return sayi1 + sayi2;
}
int main()
{
    int a = 10;
    int b = 10;
    std::cout << topla(a, b);
}

