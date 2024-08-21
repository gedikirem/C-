// OnIslemci2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include"Kutuphane.h"//Ya bu şekilde Kutuphane.h adlı ayrı bir dosyada tanımlamayı yapacağız


//Ya da aşağıdaki gibi burda  tanımlama yapacağız
//int topla(int a, int b); 

int main()
{

    Mat mat(10,10);
  std::cout<<  mat.topla();



    //std::cout << topla(10,20);
}


