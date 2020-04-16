#include <iostream>
#include <cassert>

using namespace std;



float sumaSzeregu(const int n, const float x)
{
    float suma = 1.0;
    float ktyElement = 1.0;
    for (int k = 1; k <= n; k++){
        ktyElement = ktyElement *x/k;
        suma += ktyElement;
    }
    return suma;
}
int a = 2;

int main()
{
  while(a==2){
  float x;
  int n;
  cout << "podaj x:"<<endl;
  cin >> x;
  cout << "podaj n:"<<endl;
  cin >> n;
    cout << sumaSzeregu(n,x)<<endl;
    cout << "Jesli chcesz kontynuowac wcnisnij 2, w przeciwnym wypadku dowolna liczba." << endl;
    cin >> a;
  }
    return 0;
}
