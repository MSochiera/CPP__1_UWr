#include <iostream>
using namespace std;
int main()
{
    int n;
    float k=0;
    cout << "podaj n: " << endl;
    cin >> n;
    for (float i = 1; i <= n; i++)
    {
        k = k + 1/i;
        cout << "k=" << k <<"a i="<<i<< endl;
    }
    cout << k;
  
}
