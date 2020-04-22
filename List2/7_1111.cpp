#include <iostream>
using namespace std;

int main()
{
	int n,k=0,f=1,suma=0;
	cout <<"podaj liczbe n" <<endl;
	cin >> n;
	for(n;n>0;n--)
	{
		k=k+f;
		cout <<"k: " << k <<endl;
		f=f*10;
		suma = suma +k;
	}
	cout << endl << suma;
	return 0;
}
