using namespace std;
#include <iostream>

int main()
{
    int a, i;
    cin >> a;
    a--;
    for (a; a>0; a--)
    {
        i = 2;
        for (i; i <= a / 2; i++)
        {
           
            if (a % i == 0)
            {
                

                break;
            }
        }
        if (i >a/2)
        {
            cout << endl << a;
            break;
        }
    }
    

}
