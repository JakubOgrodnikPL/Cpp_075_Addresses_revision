#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int zmienna1 = 213;
    int tablica[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    struct
    {
        int liczba;
        long long duzaLiczba;
    } struktura;
    cout << "Adres zmienna1=" <<& zmienna1 << endl << endl;
    cout << "Adres tablica=" <<& tablica << endl;
    cout << "Adres tablica[0]=" <<& tablica[ 0 ] << endl;
    cout << "Adres tablica[1]=" <<& tablica[ 1 ] << endl << endl;
    cout << "Adres struktura=" <<& struktura << endl;
    cout << "Adres struktura.liczba=" <<&( struktura.liczba ) << endl;
    cout << "Adres struktura.duzaLiczba=" <<&( struktura.duzaLiczba ) << endl;
    getch();
    return( 0 );
}
