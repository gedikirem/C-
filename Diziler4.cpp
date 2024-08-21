// Diziler4.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//
/*
int dizi[]=int *dizi aynı anlam
*/
#include <iostream>
void test(char dizi[]) {
   std::cout << dizi;
   /* for (int i = 0; i < 3; i++) {
        std::cout << dizi[i];
    }*/
}

int main()
{
   char a[]{"irem"};
    test(a);
}

