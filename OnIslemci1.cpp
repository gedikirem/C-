// OnIslemci1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//Makrolar
//Koşullu derleme

#include <iostream>
#define SAYI 1
#define TOPLA(a,b) (a+b)
#define DEBUG true

int main()
{
//#ifdef DEBUG
//	std::cout << "Dev mesajları";
//#endif // DEBUG


#if DEBUG
	std::cout << "Dev mesajları";
#endif // DEBUG


//	std::cout << TOPLA(SAYI,SAYI); 
}

