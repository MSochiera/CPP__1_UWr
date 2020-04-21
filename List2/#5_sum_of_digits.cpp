#include <iostream>
using namespace std;

int main()
{
    int a,sum=0;
    cin >> a;

    while (a > 0)
    {
        sum = sum + (a % 10);
        a = a / 10;
    }
    cout << "suma cyfr to: " << sum << endl;
    return 0;
}
