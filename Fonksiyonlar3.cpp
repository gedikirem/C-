
//Fonksiyon Geri Aramaları
// using fint=int(*)(int);
//int(*fint)(int);
using fint = int(*)(int,int);
#include <iostream>
#include<string>
int topla(int a, int b) {
    return a + b  ;
}
//int getir(int(*fint)(int,int) ){//Önce fonsiynun geri dönüş değeri int,
//    //sonra pointer tipinde bir değişken ismi ( bu bölümde kullanacağımız
//    //sonra çağıracağımız fonksiyonun parametrelerini tür olarak belirlememiz gerek topla fon.da int türünde 2 değişken var
//    int a = fint(10, 10);//bunu bir şeyin içine koymamız gerek geri dönüş değeri int o yyüzden int a=fint(10,10) deriz
//    return a;
//}
int getir( fint f) {
    int a = f(20,10);
    return a;
}
int main()
{
    
    int b = getir(topla);
    std::cout << b;

}


