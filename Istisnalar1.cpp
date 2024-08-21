// Istisnalar1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//


#include <iostream>
#include<string>

//double bolme(int a, int b,bool& sonuc) {
  
//    if (b < 1) {
//        sonuc = false;
//        return 0;
//    }
//    return a / b;
//}

class Ex {
private:
    std::string message;
public:
//    Ex(std::string message) {
//     this->message = message;//derleyicinin kafasının karışmasını önlemek için
//    }
/*    Ex(const std::string msg) : message(msg) { }
    std::string yaz() {
        return this->message;*/
        //Yukardaki yerine aşağıdakini de yapabilirdik
      
    // int a(10) a ya 10 atamak gibi
//    }
};

std::string hata(std::string error) {
    return error;
}

double bolme(int a, int b) {
    try {
        if (b < 1) {    
            throw -1;
           
        }
        if (a < 1) {
         //   throw "0 bolunemez"; string gönderme
         //   throw Ex("Merhaba"); sınıf gönderme
            throw hata("merhaba123");//fonksiyon 
        }

        return a / b;
    }
  /*  catch(int err){
        std::cout <<err<< "Bir sayi sifira bolunemez";
    }*/
   /* catch (const char* err) {
        std::cout << *err << "Bir sayi sifira bolunemez";
    }*/
   /* catch (Ex err) {
        std::cout << err.yaz();
    }*/
    catch (std::string err) {
        std::cout << err;
   }
}

int main()
{
    
    std::cout << bolme(0,3);
  
}


