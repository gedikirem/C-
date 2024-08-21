// Nesne4.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.


#include <iostream>
//Kapsülleme

class Payment {
private:
    float tutar;
public:
    std::string paraBirimi;

    void setTutar(float t) {
        if (t > 0) {
            tutar = t;
        }
        else {
            tutar = 0.1;

        }
       
    }

    void pay() {
        std::cout<<tutar << "Odeme alindi";
    }
};

int main()
{
    Payment pay;
    pay.setTutar(50.40);
    pay.paraBirimi = "tl";
    pay.pay();

}

