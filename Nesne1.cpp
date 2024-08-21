// Nesne1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//
//
//#include <iostream>
//
//
//class Matematik
//{
//public:
//	int a;
//	int b;
//	int result = 0;
//
//	void topla() {
//		result = this->a + this->b;
//   }
//	void print() {
//		std::cout << this->result;
//	}
//
//};
//
//
//
//int main()
//{
//	Matematik mat;//Sınıftan nesne oluştur
//	mat.a = 10;
//	mat.b = 20;
//	mat.topla();
//	mat.print();
//}

//Alan hesaplaması yapan sınıf

//class Hesapla {
//public:
//	int genislik;
//	int yukseklik;
//	int alan;
//
//	void giris() {
//		std::cout << "Yukseklik Gir" << std::endl;
//		std::cin >> yukseklik;
//		std::cout << "Genislik Gir" << std::endl;
//		std::cin >> genislik;
//	}
//	void hesapla() {
//		alan = yukseklik * genislik;
//		std::cout << alan;
//	}
//
//};
//
//int main()
//{
//	Hesapla hesap;//Sınıftan bir nesne yaratmış olduk
//	hesap.giris();
//	hesap.hesapla();
//
//
//}

//Erişim Belirteçleri
//Public,Private,Protected
//#include<string>
//
//class Payment {
//private:
//	std::string hasCode = "123456789";
//	void sorgula() {
//		std::cout << "Veriler bankaya gönderiliyor.Parabirimi:" + this->paraBirimi + "Tutar:" + this->tutor + "Kod:" + this->hasCode;
//
//	}
//public:
//	std::string paraBirimi = "tl";
//	std::string tutor = "0.0";
//	
//	void pay() {
//		sorgula();
//		std::cout << "Veriler bankaya gönderiliyor.Parabirimi:" + this->paraBirimi + "Tutar:" + this->tutor + "Kod:" + this->hasCode;
//
//	}
//};

//class Test :public Payment {//Test sınıfı Payment sınıfından miras alıyor hasCode kullanabilir
//
//};

//int main() {
//	Payment payment;
//	payment.paraBirimi = "tl";
//	payment.tutor = "50.6";
//	
//	payment.pay();
//	return 0;
//}



//Kurucu ve yıkıcı method

//class Payment {
//
//public:
//	float tutar;
//	std::string paraBirimi;
//	std::string hashCode = "15682887";
//	
//	Payment(bool f,std::string a) {
//		tutar = 1.2;
//		paraBirimi = "tl";
//		std::cout << a;
//		
//	}
//	Payment() {//Yapıcı method ,nesne yaratma işemi gerçekleştiğinde method direkt çalışır
//	
//	}
//	~Payment() {//Yıkıcı method
//		std::cout << "Bitti";
//	}
//	
//	void pay() {
//		//payTo(hashCode,tutar,paraBirimi);
//		std::cout << "Odeme alindi";
//
//	}
//};
//
//
//int main() {
//	Payment pay(true,"Merhaba");
//	pay.tutar = 10.20;
//	pay.paraBirimi = "tl";
//	//pay.hashCode = "345678";
//	pay.pay();
//	return 0;
//
//
//}