#include"Kutuphane.h"

Mat::Mat(int a, int b) :a(a), b(b) {}//Nesnenin i�indeki a ve b ye parametre olarak g�nderilen a ve b yi ata
int Mat::topla() {
	return this->a + this->b;
}


int topla(int a, int b) {
	return a + b;
}