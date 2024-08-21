// Nesne7.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
//const object
//const method
//const variable
//const pointer
//return const


class Silah {
private:
	int deger = 10;
public:
 //const	int* get()  {// const deger ifadesinin değişmesini önlemek için 
	//	return &deger;
	//}
 	int* get() {
	 return &deger;
 }
	int getBaska() {
		return deger;
	}
};

int main()
{
	 Silah silah;
//	 const int* test = silah.get();
//	 *(silah.get()) = 100;//değeri değiştirmeye çalışıyor ama const olduğundan olmaz

	 *(silah.get()) = 100;
	 std::cout << silah.getBaska();
}


