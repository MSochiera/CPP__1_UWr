#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int a=2,b,c,k=0;
    cin >> c;

        for (a; a > 0; a++)
        {
            b = 2;

            for (b; b <= a / 2; b++)
            {
                if (a % b == 0)
                {
                    break;
                }
            }
            if (b > a / 2)
            {
                cout << a << endl;
                k++;
            }
            if (k == c) break;
        }
    return 0;
}
