// Nesne5.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

//Virtual method
//Polymorphism = Çok biçimlilik
//Override = Metot Ezme

#include <iostream>
class Silah {
public:
	std::string isim;
	int mermiKapasitesi;
	std::string renk;

	//virtual void ates() = 0;//Sanal method
	virtual void ates() {
		std::cout << "pis pis";
	}
};

class Ak47 :public Silah {
public:
	bool  seriTek;
	int kayisUzunlugu;
	bool durbun;

	void ates() {
	//	Silah::ates(); Üstteki metthodun ezilmemesi için
		std::cout << "bom bom";
	}
};
class Pistol:public Silah {
public:
	int kurmaKoluDeseni;


	void ates() {
		std::cout << "bam bam";
	}
};
class M1 :public Silah {
public:
	bool  seriTek;
	int kayisUzunlugu;
	int kurmaPozisyonu;

	void ates() {
		std::cout << "bum bum";
	}
};

void atesEt(Silah* silahPtr) {
	silahPtr->ates();
}

int main()
{
	Ak47 ak47;
	//Pistol pistol;
	//M1 m1;

	//atesEt(&ak47);
	//atesEt(&pistol);
	//atesEt(&m1);
}


