// Akiskontrolleri.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

int main()
{
    int a = 0;
    int b = 0;
    char islem = '+';
    while (true)
    {
        std::cout << "Birinci sayi" << std::endl;
        std::cin >> a;//Kullanacıdan aldığı değeri a nın içine atacak
        std::cout << "ikinci sayi" << std::endl;
        std::cin >> b;

        std::cout << "islem giriniz" << std::endl;
        std::cin >> islem;
        if (islem == 'e') {
            goto stop;
        }
       /* if (islem == 'e') {
            continue;//şart sağlandığı sürece sürekli başa döner 
              }*/
        //  if (islem == 'e') {
        //      break;
        //  }
        // // if (islem=='+')
        ///*  if (a>10 || a<5)
        //  {
        //      std::cout << "Sonuc:" << a + b;
        //  }
        //  else if(a>100)
        //  {
        //      std::cout << "elseif Sonuc:" << a + b;
        //  }
        //  else
        //  {
        //      std::cout << "Hata";
        //  }*/
        //  //Switch-Case
        switch (islem)
        {
        case '+':
            std::cout << " Toplama Sonuc:" << a + b;
            break;
        case '-':
            std::cout << "Cikarma Sonuc:" << a - b;
            break;
        case '*':
            std::cout << "Carpma Sonuc:" << a * b;
            break;
        case '/':
            std::cout << "Bolme Sonuc:" << a / b;
            break;

        default:
            std::cout << "Bilinmeyen islem";
            break;
        }
    }
stop:
    std::cout << "Durdu";

  //  //size_t : boyut tipi

  // /* for (int i = 1; i < 10; i++)
  //  {
  //      std::cout << "Dongu" << i << "\n";
  //  }*/
  // 

  //  }
 /*   do
    {
        std::cout << "Bilinmeyen islem";
    } while (false);*/
    //Goto,break,continue
    //Goto: bir yerden bir yere zıplama
}

