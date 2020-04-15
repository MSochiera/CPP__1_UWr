#include <iostream>

using namespace std;
int k = 0;
int main()
{
    while(k!=2)
    {
        int a,c=0,d;
        cout << "Podaj rok od -2000 do 2020:" << endl;
        cin >> a;
        if(a==0 || a>2020 || a<-2000)                       //Warunek sprawdzający czu rok miesci sie w kryteriach
        {
            cout << endl << "Bledny rok" <<endl;

        }
        else
        {
            if(a<0)                                          //Warunek sprawdzajacy czy rok jest > czy < od 0
            {
                a=a*(-1);
                c=1;
            }
            d=a/100;
            if(a%100!=0)                                    //Warunek sprawdzajacy czy rok jest na granicy wiekow
            {
                d=d+1;
            }
            cout << "wiek: " << d;
            if(c==1)
            {
                cout << " p.n.e";
            }
            cout << endl << "Czy chcesz kontynuowac? Jesli nie wybierz 2, jesli tak - dowolna liczba." << endl ;
            cin >> k;
        }
    }
    return 0;
}
