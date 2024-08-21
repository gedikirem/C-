// StandartKutuphane2.cpp : Bu dosya 'main' işlevi içeriyor. Program yürütme orada başlayıp biter.
//

#include <iostream>
#include<string>
#include<fstream>

using namespace std;

int main()
{
 /*   string deneme = "Merhaba string";

    deneme.insert(7," nasilsin ");

    deneme.append(" nasilsin ");
    std::cout << deneme;*/

    string* yaz = new string;
    ofstream* dosya=new ofstream("dosya.txt");
    if (dosya->is_open()) {
        cin >> *yaz;
        *dosya << *yaz;
        dosya->close();
    }
  
}

