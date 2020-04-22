#include <math.h>
#include <iostream>
using namespace std;

int main()
{
	float x,wynik=0;
	int n,silnia=1;
	cout << "podaj x i n:" << endl;
	cin >> x >> n;
	for(int k=0;k<=n;k++)
	{
		if(k!=0)
		{
			silnia = silnia *k;
		}
		wynik=wynik+(pow(x,k))/silnia;
	}
	cout << endl <<  wynik << endl;
	return 0;
}
