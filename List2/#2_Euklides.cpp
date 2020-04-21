#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "podaj 2 liczby:" << endl;
    cin >> a >> b;
    if (a < b) swap(a, b);
    while (b !=0)
    {
        a = a % b;
        swap(a, b);
    }
    cout << a;
}
