
#include <iostream>

int main()
{
    int a = 10;
    int b = 10;
    int sonuc = a++;//Önce atama yapar sonra arttırır 10
   // int sonuc = ++a Önce arttırır sonra atama yapar 11
  //  a += b; means a = a + b ;
    std::cout << sonuc;//Çıktı 10
    std::cout << '\n';
    std::cout << a << std::endl;//Çıktı 11

      
}



