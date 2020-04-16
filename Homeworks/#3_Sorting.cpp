#include <iostream>
using namespace std;
int a,b,c;
int maxi(int a,int b,int c)
{
    int maxi = a;
    
    if (b > maxi)
    {
        maxi = b;
    }
    

    if (c > maxi)
    {
        maxi = c;
    }
    

    return maxi;
}

int mini(int a, int b, int c)
{
    int mini = a;
    if (b < mini)
    {
        mini = b;
    }
    if (c < mini)
    {
        mini = c;
    }
    return mini;
}

float arith(int a, int b, int c)
{
    return (a + b + c) / 3;
}
float geom(int a, int b, int c)
{
    return cbrt(a * b * c);
}
int main()
{
    int petla = 1;
    while (petla == 1)
    {
        cout <<endl<<"Podaj 3 liczby naturalne oddzielone spacja:" << endl;
        cin >> a >> b >> c;
        cout << "Najwieksza to: " << maxi(a, b, c) << endl;
        cout << "Najmniejsza to: " << mini(a, b, c) << endl;
        cout << "Srednia geometryczna wynosi: " << arith(a, b, c) << endl;
        cout << "Srednia arytmetyczna wynosi: " << geom(a, b, c) << endl << endl;
        cout << "Czy chcesz kontynuowac? Jesli tak wcisnij 1, jesli nie dowolna liczba" << endl;
        cin >> petla;
    }
    return 0;
}
