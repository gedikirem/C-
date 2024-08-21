//Inline Function(Satır içi fonksiyonlar)
//Fonksiyon çağrıldığında direk çağrılmasın içeriği kopyalansın
#include <iostream>
inline int topla(int a, int b) {
    return a + b;
}
int main()
{
    topla(10, 10);//derleyici bunu fonk. ol. düşünmüyor
}

