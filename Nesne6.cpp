// Nesne6.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>

class Hayvan {
public:
 virtual void sesCal() = 0;//Soyut sınıf oldu gövdesi yok
};

class Kopek :public Hayvan {
public:
	void sesCal() {
		std::cout << "Hav";
	}
};
class Kedi :public Hayvan {
public:
	void sesCal() {
		std::cout << "Miyav";
	}
};

class Ordek :public Hayvan {
public:
	void sesCal() {
		std::cout << "Vak";
	}
};
class Fare :public Hayvan {
public:
	void sesCal() {
		std::cout << "Civ";
	}
};

void tumSesCal(Hayvan* hPtr) {
	hPtr->sesCal();
}

int main()
{
	Kopek kopek;
	Kedi kedi;
	Ordek ordek;
	Fare fare;
	tumSesCal(&fare);
	
    
}

