// Sablon.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>


/*
* template<typename T, typename U>//Şablon oluşturma
T max(T a,U b) {//Şablon method
    return (a > b) ? a : b;
}
*/

//int max(int a, int b) {
//    return (a > b) ? a : b;//a b den büykse a yı değilse b yi dönder
//}

/*
* int main()
{
    //3 şekilde kullanılabilir
   // std::cout << max(1.1,5.5);
    std::cout << max<int,float>(10, 5.5f);
 //   std::cout << max<>(10, 5);

}
*/

//Sınıf Şablonu

template<typename T>

class Mat {
public:
   T a{};//varsayılan olarak 0 değeriyle başlar
    T b{};

   T topla() {
        return a + b;
    }

};

class Silah{};
class Mermi{};

//
//template<class T>
//T* nesneYap() {
//    T nesne;
//    return &nesne;
//}

template<typename T>
 T* nesneYap(T nesne) {
   return  &nesne;
}



int main() {

   // std::cout << nesneYap<Silah>();//sınııfın bellek adresi,sınıf gönderdik
    Silah silah;
    std::cout << nesneYap<Silah>(silah)//nesne gönderdik


 /*  Mat<int> mat;
   mat.a = 10;
   mat.b = 20;
   std::cout <<mat.topla();

   Mat<float> mat1;
   mat1.a = 10.5;
   mat1.b = 20.9;
   std::cout << mat1.topla();*/
}
