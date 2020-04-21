#include <iostream>
using namespace std;
int main()
{
    int n,k=0;
    cout << "podaj liczbe: ";
    cin >> n;
   while(n>=1)
    {
        k++;
        n = n / 10;
        cout << "tu ";
    }
    cout << "liczba n ma " << k << " cyfr.";
}
