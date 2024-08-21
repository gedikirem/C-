#include"Kutuphane.h"

Mat::Mat(int a, int b) :a(a), b(b) {}//Nesnenin içindeki a ve b ye parametre olarak gönderilen a ve b yi ata
int Mat::topla() {
	return this->a + this->b;
}


int topla(int a, int b) {
	return a + b;
}