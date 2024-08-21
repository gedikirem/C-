#pragma once//Dögüye girmesini önlemek için

//Mat sýnýfýnýn prototipi 
class Mat {
private:
	int a{};
	int b{};
public:
	Mat(int a, int b);
	int topla();
};

/*
* Topla fonksiyonu 2 adet alýr
*/
int topla(int a, int b);