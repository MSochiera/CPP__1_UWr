#include <iostream>
using namespace std;
int main()
{
    int wys, r, pi = 3.14;
    cout << "Podaj h i r:" << endl;
    cin >> wys >> r;
    cout << "Pole wynosi: " << (2*pi*r * wys) + 2*pi*r*r << endl;
    cout << "Objetosc wynosi: " << 2 * pi * r * wys;
    return 0;
}
