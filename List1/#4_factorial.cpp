#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a,c=1;
    cin >> a;
    for (a; a > 0; a--)
    {
        c = c * a;
    }
    cout <<endl<< c;

    return 0;
}
