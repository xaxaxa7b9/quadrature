#include <iomanip>
#include <iostream>

#include <cmath>

using namespace std;



double funkcja(double x)
{
    return(sin(1 - x) / (1 - x));
}

int main()
{
    int N; //liczba trapezow
    double p, k, dx, pole = 0;
    int i;


    cout.precision(3);

    cout << "ilosc trapezow(podprzedzialow calkowania):" << endl;
    cin >> N;
    cout << "poczatek przedzialu calkowania: " << endl;
    cin >> p;
    cout << " koniec przedzialu calkowania: \n" << endl;
    cin >> k;

    dx = (k - p) / N;
    for (i = 1; i < N; i++)
    {
        pole += funkcja(p + i * dx);
    }
    pole = (pole + (funkcja(p) + funkcja(k)) / 2) * dx;

    cout << "Obliczona calka: " << pole << endl;


    return 0;
}
