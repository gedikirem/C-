// Diziler2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//Döngü içinde dizi
//İç içe Diziler
//Dizinin eleman sayısını bulma
//Statik ve Dinamik dizi

#include <iostream>

int main()
{
	/*int puanlar[3] = { 10,20,30 };
	for (int i = 0; i < 3; i++) {
		std::cout << puanlar[i];
	}*/

	/*int dizi[1][1][1]
	{
		{
			{
				1
			}

		}
	};
	std::cout << dizi[0][0][0];*/
	//Statik dizi
	const int sayi = 3;//veya constexpr
	int dizi[sayi][2]{
		{
		  1,2
        },
	    {
	      5,9
        },
		{
	      11,23
        }
	};
//	std::cout << dizi[2][0];//11
	//for (int i = 0; i < 3; i++) {
	//	for (int i2 = 0; i2 < 2;i2++) {
	//	std::cout << dizi[i][i2]<<std::endl;
	//	}
	//	
	//}
	std::cout << std::size(dizi[0]);
}


