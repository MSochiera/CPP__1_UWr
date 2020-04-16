#include <iostream>
using namespace std;
int main()
{
    int liczba, pierwsza, ostatnia, a = 1;
    while (a == 1)
    {
        cout << "Podaj liczbe:" << endl;
        cin >> liczba;
        pierwsza = liczba;
        while (pierwsza >= 10) 
        {
            pierwsza = pierwsza / 10;
        }
        ostatnia = liczba % 10;  
        cout << "Pierwsza cyfra tej liczby to: " << pierwsza << ", a ostatnia to: " << ostatnia << endl;
        cout << "Jesli chcesz kontynuowac nacisnij 1, jesli nie - dowolny znak" << endl;
        cin >> a;
    }
    return 0;
}


