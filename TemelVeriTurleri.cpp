
#include <iostream>
#include<iomanip>
int main()
{
    /* 
    char d = 10;
    char a = 10;
   
    std::cout << d+a;
   
    char k[] = "Merhaba";
    std::cout << k;
     
    signed int s = -1;
    unsigned int u = 1;//tarayıcı 1'i -1'e dönüştürür if te karşılaştırma yaparken
    if (s < u) {
        std::cout << "Kucuk";
    }
    else {
        std::cout << "Kucuk Degil";
    }
  
    unsigned short x { 65535 };
    std::cout << "x degeri:" << x << '\n';
    x = 65536;
    std::cout << "x yeni deger:" << x << '\n';
    x = 65537;
    std::cout << "x son deger:" << x << '\n';
    
    unsigned int x{ 3 };
    unsigned int y{ 5 };
    std::cout << x - y << "\n";
    
   // float f{ 123456789.0f };
    double f{ 123456789.0 };
    std::cout << std::setprecision(16);//hassasiyet 6

    std::cout << f << '\n';
     
  //  int8_t d = 115;
    int8_t d =6;
    int8_t a = 0;
    std::cout << d+a<< '\n';
     */
    //Boolean
    //true doğru evet olumlu
    //false yanlış hayır olumsuz
    /*  bool a = true;
    std::cout << sizeof(a);*/
   /*auto d = "test";
    std::cout << d;*/
    //Aşağıdakilerin 3 ü de aynı işlemi yapar
   
    /*
    int a = 5;
    int b(2);
    int c{ 2 };
    */
    //(Literal Constants) Aslına Uygun
    //bool isActive{ true };
    //std::cout << "Hello World";
    //(Symbolic Constants) Sembolik Sabitler
    // const  int x{ 4 };
   // x = 15;
   // const double pi{ 3.14 };
    //Kapalı Tür Dönüşümü
   /* int a = 10;
    a = 1.4;
    std::cout << a;*/
    //Parantez kullanma amaçlarından bir tanesi derleme zamanı hata ayıklama
    //int abcdef{ 1.1 };
    //Açık Tür Dönüşümü 
    //int a = 10;
    //a = static_cast<int>(5.9);//double veriyi int a dönüştür 5.9 u 5 e 
    //// static_cast dönüştürme işlemini yapıyor
    //std::cout << a;
    char ch{ 97 };
    std::cout << static_cast<int>(ch);
    //Normalde çıktı bir karakter olacakken çıktıyı int ol. yani kendisini gösterir
    
}   
