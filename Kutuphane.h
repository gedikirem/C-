#pragma once//D�g�ye girmesini �nlemek i�in

//Mat s�n�f�n�n prototipi 
class Mat {
private:
	int a{};
	int b{};
public:
	Mat(int a, int b);
	int topla();
};

/*
* Topla fonksiyonu 2 adet al�r
*/
int topla(int a, int b);