
#include <iostream>
//void mesaj1() {
//	std::cout <<'\n' <<"Hello World!";
//}
//void mesaj(char msg1,char msg2) {
//	std::cout << msg1 << msg2;
//	}
//int topla(int x, int y) {
//	mesaj1();
//	return x + y;

//}
//bildirim ve tanımlama
//declaration defination
int topla(int sayi1,int sayi2);// bu bildirim
int main()
{
	int a = 10;
	int b = 10;
	std::cout << topla(a, b);
	//mesaj('T','R');
	////mesaj();
	//std::cout << '\n' << topla(8, 9);
}
int topla(int sayi1,int sayi2){
return sayi1 + sayi2;
}//bu ise tanımlamadır

