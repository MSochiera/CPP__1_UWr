#include <iostream>
#include <cstdlib>
using namespace std;
int main()
{
    int a;
    cout << "Podaj liczbe naturalna: " << endl;
    cin >> a;
    for (a; a > 0; a--)
    {
        cout << rand() << endl;
    }
    return 0;
}
