
//Parametre Varsayılan Değer
#include <iostream>
#include<string>

//void print(std::string text) {
//    std::cout << text;
//}
void print(std::string text="text",int a=0,bool  as=false) {//eğer hiçbir şey göndermeyeceksek ör. ol. text yazmasını sağlayabiliriz
        std::cout << text;
    }

int main()
{
  //  print("Merhaba");
    print();
}

