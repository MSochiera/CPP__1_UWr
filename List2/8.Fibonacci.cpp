#include <iostream>

using namespace std;

int main ()
{
	int i;
	cout << "podaj n-ta liczbe fibonacciego: " << endl;
	cin >> i;
	int T[i+1];
	T[0]=0;
	T[1]=1;
	for(int k=2;k<=i;k++)
	{
		T[k] = T[k-1] + T[k-2];
	}
	cout << endl << i <<"-ty wyraz ciągu fibonacciego to: " << T[i] << endl;
	return 0;
}

