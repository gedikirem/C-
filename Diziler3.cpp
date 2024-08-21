// ConsoleApplication1.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//Fonksiyonlara diziyle geçme

#include <iostream>
//void test(int dizi[3], int size)
void test(char dizi[9]) {
	std::cout << dizi;
	/*for (int i = 0; i < size; i++) {
		std::cout << dizi;
	}*/
}

int main()
{
	int dizi[3]{ 1,2,3 };
	int size = 3;
	char cdizi[]{ "Irem" ,"Beyza"};
	test(cdizi);
//	test(dizi,size);
}

